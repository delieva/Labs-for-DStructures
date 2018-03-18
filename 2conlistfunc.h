void Sort(Node** p)
{
    Node* p1 = *p, *p2 = 0, *p3 = *p;

    for(p2 = *p; p2; p2 = p2->next)
    {
        for(p1 = p3; p1->next; p1 = p1->next)
        {
            if (p1->data > p1->next->data)
            {
                Node *temp;
                temp = p1->next;
                if (p1->prev)
                    p1->prev->next = temp;
                else
                    p3 = temp;
                temp->prev = p1->prev;
                p1->next = p1->next->next;
                temp->next = p1;
                p1->prev = temp;
                if (p1->next)
                    p1->next->prev = p1;

                if (p1 == p2)
                    p2 = p2->prev;

                p1 = p1->prev;

            }
        }
    }
    *p = p3;
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
    tmp->prev = nullptr;
    if(!p){
        p = tmp;
        p->next = nullptr;
        return;
    }
    tmp->next = p;
    p->prev = tmp;
    p = tmp;
}

void Clear(Node** p)
{
    for(*p; *p; *p = (*p)->next)
        delete (*p)->prev;
}