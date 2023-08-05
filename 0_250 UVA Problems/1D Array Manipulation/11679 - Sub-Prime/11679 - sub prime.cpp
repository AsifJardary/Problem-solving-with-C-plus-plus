#include <iostream>
using namespace std;

int main()
{
    int B, N, owe, owed, amount;
    int owes[20];

    cin>> B>> N;

    while (B)
    {
        // sets up how much they have in credit or whatever
        for (int i = 0; i < B; ++i)
            cin>> owes[i];


        while (N--)
        {
            cin>> owe>> owed>> amount;

            owes[owe - 1] -= amount;
            owes[owed - 1] += amount;
        }

        bool positive(true);

        for (int i = 0; i < B; ++i)
            if (owes[i] < 0)
                positive = false;

        if (positive)
            cout<< "S\n";
        else
            cout<< "N\n";

        cin>> B>> N;
    }

}
