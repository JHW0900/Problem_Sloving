#include <iostream>
using namespace std;

int dp[1000001] = { 0 };

int division_num(int n) {
	int cnt = n;
	int tmp;

	if (n < 4) return dp[n];
	else if (dp[n] == 0) {
		if (n % 3 == 0)
			cnt = division_num(n / 3) + 1;
		if (n % 2 == 0) {
			tmp = division_num(n / 2) + 1;
			if (cnt > tmp) cnt = tmp;
		}
		tmp = division_num(n - 1) + 1;
		if (cnt > tmp) cnt = tmp;

		dp[n] = cnt;
	}
	return dp[n];
}

int main() {
	dp[2] = 1;
	dp[3] = 1;
	int n;
	cin >> n;
	cout << division_num(n);
	return 0;
}