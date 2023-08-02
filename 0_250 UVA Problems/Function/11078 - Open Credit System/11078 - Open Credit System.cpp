#include<iostream>
using namespace std;
//max limit
int T, n, s[200000];

int main() {
    cin >> T;
    while( T-- ) {
        cin >> n;
        int max = -200000; int max_dif = -200000;
        for(int i = 0; i < n; i++)
            cin>> s[i];
        for(int i = 0; i < n - 1; i++) {
            if(s[i] > max)
                //cout<<s[i];
                max = s[i];
            if(max - s[i + 1] > max_dif)
                max_dif = max - s[i + 1];
                //cout<<s[i+1];
        }
        cout<< max_dif;
    }
}
