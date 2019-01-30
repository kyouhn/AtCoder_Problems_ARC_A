#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	string r;
	cin >> r;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		if (r[i] == 'A') {
			ans += 4;
		}
		else if (r[i] == 'B') {
			ans += 3;
		}
		else if (r[i] == 'C') {
			ans += 2;
		}
		else if (r[i] == 'D') {
			ans += 1;
		}
		else if (r[i] == 'E') {
			ans += 0;
		}
	}

	if (ans == 0) {
		cout << 0 << endl;
	}
	else {
		cout << setprecision(15) << (double)ans / (double)N << endl;
	}

	return 0;
}