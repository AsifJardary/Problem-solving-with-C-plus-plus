#include <iostream>
using namespace std;

int main()
{
    int T, i;
    cin >> T;
    for (i = 0; i < T; i++)
    {
        int Ind = 0, Eng = 0;
        int arr[5];

        for (int j = 0; j < 5; j++)
        {
            cin >> arr[j];
            if (arr[j] == 1)
            {
                Ind++;
            }
            else if(arr[j] == 2)
            {
                Eng++;
            }
        }
        if (Ind > Eng)
            cout << "INDIA" << "\n";
        else if (Ind < Eng)
            cout << "ENGLAND" << "\n";
        else if (Ind == Eng)
            cout << "DRAW" << "\n";


    }
}
