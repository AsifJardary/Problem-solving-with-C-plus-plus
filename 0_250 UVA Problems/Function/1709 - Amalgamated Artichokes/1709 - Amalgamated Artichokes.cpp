#include <bits/stdc++.h>
using namespace std;

int main() {
    //essential variable declaration!
	int p, a, b, c, d, n;
	while (scanf("%d %d %d %d %d", &p, &a, &b, &c, &d) == 5) {
		scanf("%d", &n);
		//oppose computational error!
		double mx = -1e+30, ret = 0;
        //main loop
		for (int i = 1; i <= n; i++) {
			double f = p * (sin(a*i + b) + cos(c*i+d) + 2);
			ret = max(ret, mx - f);
			mx = max(mx, f);
		}
		printf("%.8lf\n", ret);
	}
	return 0;
}
