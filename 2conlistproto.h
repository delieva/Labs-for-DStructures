struct Node {
    int data;
    Node *next;
    Node *prev;
};
void Sort(Node** p);
void Print (const Node *p);
void Push(Node* &p, const int data);
void Clear(Node** p);