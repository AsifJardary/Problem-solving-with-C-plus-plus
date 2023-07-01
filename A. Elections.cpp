#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b && a==c && b==c)
        {
            cout<<1<<" "<<1<<" "<<1<<"\n";
        }
        else if(a==b && a>c && b>c)
        {
          cout<<1<<" "<<1<<" "<<(a-c)+1<<"\n";

        }
        else if(b==c && b>a && c>a)
        {
          cout<<(b-a)+1<<" "<<1<<" "<<1<<"\n";

        }
        else if(a==c && a>b && c>b)
        {
          cout<<1<<" "<<(a-b)+1<<" "<<1<<"\n";

        }
        else if(a>b && a>c)
        {
            cout<<a-a<<" "<<(a-b)+1<<" "<<(a-c)+1<<"\n";
        }
        else if(b>a && b>c)
        {
            cout<<(b-a)+1<<" "<<b-b<<" "<<(b-c)+1<<"\n";
        }
        else if(c>a && c>b)
        {
            cout<<(c-a)+1<<" "<<(c-b)+1<<" "<<c-c<<"\n";
        }
    }
}
