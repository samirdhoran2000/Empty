#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

node *head = NULL;

void insert(int n){
    node *p = new node();
    p->data = n;
    p->next = NULL;
    if (head==NULL){
        head = p;
    }else{
        p->next = head;
        head = p;
    }
}

void print(node * ptr){
    while (ptr!=0)
    {
        cout << ptr->data << "  ";
        ptr = ptr->next;
    }
    
}
int main()
{
    cout << "How many nodes do you want to Print : " << endl;
    int k,b;
    cin >> k;

    for (int i = 0; i < k;i++){
        cout << i + 1 << "nth Node : ";
        cin >> b;
        insert(b);
    }

    // insert(22);
    // insert(99);
    // insert(6);
    // insert(53);
    // insert(4);

    print(head);

    return 0;
}