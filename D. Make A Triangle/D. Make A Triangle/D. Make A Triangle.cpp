#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c, d, T, i;
    float p1, p2, p3, p4;
    cin >> T;
    for (i = 1; i <= T; i++)
    {
        cin >> a >> b >> c >> d;
        p1 = 0; p2 = 0; p3 = 0; p4 = 0;
        p1 = (a + b + c);
        p1 = p1 / 2;
        p2 = (b + c + d) ;
        p2 = p2 / 2;
        p3 = (c + d + a) ;
        p3 = p3 / 2;
        p4 = (d + a + b) ;
        p4 = p4 / 2;

        if (p1 >= p2 && p1 >= p3 && p1 >= p4)
        {
            float p1_res = p1 * (p1 - a) * (p1 - b) * (p1 - c);
            cout << fixed << setprecision(2) << sqrt(p1_res) << "\n";
        }
        else if (p2 >= p1 && p2 >= p3 && p3 >= p4)
        {
            float p2_res = p2 * (p2 - b) * (p2 - c) * (p2 - d);
            cout << fixed << setprecision(2) << sqrt(p2_res) << "\n";
        }
        else if (p3 >= p1 && p3 >= p2 && p3 >= p4)
        {
            float p3_res = p3 * (p3 - c) * (p3 - d) * (p3 - a);
            cout << fixed << setprecision(2) << sqrt(p3_res) << "\n";
        }
        else if(p4 >= p1 && p4 >= p2 && p4 >= p3)
        {
            float p4_res = p4 * (p4 - d) * (p4 - a) * (p4 - b);
            cout << fixed << setprecision(2) << sqrt(p4_res) << "\n";
        }
    }
}