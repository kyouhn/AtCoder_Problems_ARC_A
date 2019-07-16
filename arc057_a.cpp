#include<iostream>

using namespace std;

int main() {
	long long A , K;
	cin >> A >> K;
	long long two_t = 1e12 * 2;

	long long ans = A;
	long long cnt = 0;

	for (long long i = 1; i < two_t; i++)
	{
		if (ans >= two_t) {
			cout << cnt << endl;
			break;
		}
		cnt++;
		if (K == 0) {
			cout << two_t - A << endl;
			break;
		}
		else {
			ans += 1 + ans * K;
		}
	}

	return 0;
}