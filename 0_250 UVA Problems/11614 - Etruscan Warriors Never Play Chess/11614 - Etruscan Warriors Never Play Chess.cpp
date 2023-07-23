#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,s;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        s=(sqrt(1+4*2*n)-1)/2;
        cout<<s<<endl;
    }
    return 0;
}
