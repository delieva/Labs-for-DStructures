void Sort(Node** p)
{
    Node* p1 = *p, *p2 = 0, *p3;
    p3->next = *p;
    for(p2 = p3; p2; p2 = p2->next)
    {
        for(p1 = p3; p1->next->next; p1 = p1->next)
        {
            if (p1->next->data > p1->next->next->data)
            {
                Node *temp, *tmp1;
                temp = p1->next;
                p1->next = p1->next->next;
                tmp1 = p1->next->next;
                p1->next->next = temp;
                p1->next->next->next = tmp1;
            }
        }
    }
    *p = p3->next;
}

void Print (const Node *p) {
    while (p) {
        cout << p->data << ' ';
        p = p->next;
    }
    cout << endl;
}

void Push(Node* &p, const int data) {
    Node* tmp = new Node;
    tmp->data = data;
    tmp->next = p;
    p = tmp;
}

void Clear(Node** p)
{
    for(*p; *p; *p = (*p)->next) {
        Node *tmp;
        tmp = (*p)->next;
        delete *p;
        *p = tmp;
    }
}
