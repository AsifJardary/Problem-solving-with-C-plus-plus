#include <iostream>
using namespace std;

int main() {
    int T, N, h;
    cin >> T;
    for (int Case = 1; Case <= T; Case++){
        cin >> N;
        int cur = -1, high = 0, low = 0;
        for (int i = 0; i < N; i++){
            cin >> h;
            if (cur >= 0) {
                if (h > cur) {
                    high++;
                } else if (h < cur) {
                    low++;
                }
            }
            cur = h;
        }
        cout << "Case " << Case << ": ";
        cout << high << " " << low << "\n";
    }
    return 0;
}
