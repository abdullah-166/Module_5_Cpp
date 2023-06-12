#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node* n;
        Node(int value)
        {
            this->value=value;
            this->n=NULL;
        }
};
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(40);
    head->n=a;
    cout<<head->value<<endl;
    cout<<a->value<<endl;
    cout<<head->n->value<<endl;
     return 0;
}