#include<bits/stdc++.h>
using namespace std;
class r
{
    public:
        int value;
        r* n;
};
int main()
{
    r c,d;
    c.value=10;
    d.value=90;
    c.n=&d;
    d.n=NULL;
    cout<<c.value<<endl;
   // cout<<d.value<<endl;
    cout<<c.n->value<<endl;
    return 0;
}