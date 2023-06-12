#include<bits/stdc++.h>
using namespace std;
class r
{
    public:
        int value;
        r* n;
        r(int value)
        {
            this->value=value;
            this->n=NULL;
        }
};
int main()
{
    r c(10);
    r d(40);
    c.n=&d;
    cout<<c.value<<endl;
    cout<<c.n->value<<endl;
    return 0;
}