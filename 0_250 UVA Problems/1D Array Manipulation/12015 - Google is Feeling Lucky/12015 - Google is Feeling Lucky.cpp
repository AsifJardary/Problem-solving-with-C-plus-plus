#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        char web[10][105];
        int rel[10];
        int j;
        int max=-1;
        for(j=0;j<10;j++)
        {
            cin>>web[j]>>rel[j];
            if(rel[j]>max)
                max=rel[j];
        }
        cout<<"Case #"<<i<<":"<<endl;
        for(j=0;j<10;j++)
        {
            if(max==rel[j])
                cout<<web[j]<<endl;
        }
    }
    //return 0;
}
