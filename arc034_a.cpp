#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>a(N), b(N), c(N), d(N), e(N);
	for (int i = 0; i < N; i++)
	{
		cin >> a[i] >> b[i] >> c[i] >> d[i] >> e[i];
	}

	double ans = 0;
	double tmp = 0;
	for (int i = 0; i < N; i++)
	{
		tmp = a[i] + b[i] + c[i] + d[i] + e[i] * (0.12222222222);
		ans = max(ans, tmp);
	}

	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}