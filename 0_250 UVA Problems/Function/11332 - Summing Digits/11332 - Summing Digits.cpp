#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while (cin >> num)
    {
        if (num == num)
        {
            break;
        }
        else if (num%9 == 0)
        {
            cout << 9 << endl;
        }
        else
        {
            cout << num%9 << endl;
        }
    }
    return 0;
}
