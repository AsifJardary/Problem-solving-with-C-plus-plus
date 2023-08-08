
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int num;
        cin>> num;int j=1, pos=0;
        int com[105]={0};
        char s[10], b[5]; int n;
        for(int i=1; i<num+1; i++)
        {
            cin>> s;
            if(s[0]=='L')
            {
                com[j++] = -1;
                pos = pos - 1;
            }
            else if(s[0]=='R')
            {
                com[j++] = 1;
                pos = pos + 1;
            }
            else
            {
                cin>> b>> n;
                com[j++] = com[n];
                pos = pos + com[n];
            }
        }
        cout<< pos;
    }
    return 0;
}
