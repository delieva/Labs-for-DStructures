#include <iostream>

using namespace std;

int main() {
    Node* Head = nullptr;
    int k;
    for (int i = 0; i < 5; i++) {
        cout << "Print the elements of the list";
        cin >> k;
        Push(Head, k);
    }
    Print(Head);
    Sort(&Head);
    Print(Head);
    Clear(&Head);
    return 0;
}