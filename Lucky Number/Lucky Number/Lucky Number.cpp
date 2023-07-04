#include <iostream>
using namespace std;

int main()
{
    int T, i;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if (A == 7 || B == 7 || C == 7)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";

        }
        
    }

}