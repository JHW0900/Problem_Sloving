#include <iostream>
using namespace std;

int dp[41] = { 0 };

int fibo(int n) {
	if (n == 0)
		return dp[0];
	else if (dp[n] == 0)
		dp[n] = fibo(n - 1) + fibo(n - 2);
	return dp[n];
}

int main() {
	dp[1] = 1;

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		if (n == 0)
			cout << "1 0" << endl;
		else {
			fibo(n);
			cout << dp[n - 1] << ' ' << dp[n] << endl;
		}
	}
	return 0;
}