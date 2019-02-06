#include"bits/stdc++.h"

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<double> x(N), y(N);
	double ans = 0.0;
	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			ans = max(ans, sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2)));
		}
	}
	cout << setprecision(7) << ans << endl;

	return 0;
}