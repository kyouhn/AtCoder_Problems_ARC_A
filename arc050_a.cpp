#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>

using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	B[0] = toupper(B[0]);

	cout << (A == B ? "Yes" : "No") << endl;


	return 0;
}
