#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int T, n, j, m, i, z;
    cin >> T;
    for (z = 1; z <= T; z++)
    {
        cin >> n >> m;
        vector<int>arr;
        arr.resize(n);

        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
            if (ch == 'P')
            {
                int a, b;
                cin >> a >> b;
                swap(arr[a], arr[b]);
            }
            else if (ch == 'S')
            {
                int a;
                cin >> a;
                for (i = 0; i < n; i++)
                {
                    arr[i] = arr[i] + a;
                }
            }
            else if (ch == 'M')
            {
                int a;
                cin >> a;
                for (i = 0; i < n; i++)
                {
                    arr[i] = arr[i] * a;
                }
            }
            else if (ch == 'D')
            {
                int a;
                cin >> a;
                for (i = 0; i < n; i++)
                {
                    arr[i] = arr[i] / a;
                }
            }
            else if (ch == 'R')
            {
                int f, l;
                f = 0; l = n - 1;
                while (f < l)
                {
                    swap(arr[f], arr[l]);
                    f++;
                    l--;
                }
            }
        }
        cout << "Case " << z << ":" << "\n";
        for (i = 0; i < n; i++)
        {
            cout << arr[i];
            if (i == n - 1)
            {
                cout << "\n";
                break;
            }
            else
            {
                cout << " ";
            }
        }
    }
}