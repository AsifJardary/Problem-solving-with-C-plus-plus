#include <iostream>
using namespace std;

int main() {
    int t;      // Number of test cases
    int l,w,h;  // the length, width and height of a rectangular shaped box.
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> l >> w >> h;
        cout << "Case " << (i+1) << ": ";
        if (l > 20 || w > 20 || h > 20)
            cout << "bad\n";
        else
            cout << "good\n";
    }
    return 0;
}
