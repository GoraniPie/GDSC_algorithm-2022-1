#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}
	if (n == 1) {
		cout << 1;
		return 0;
	}

	int dp1 = 0;
	int dp2 = 1;
	int dp3 = 1;
	int cases;

	for (int i = 2; i <= n; i++) {
		cases = i % 3;
		if (cases == 0) {
			dp1 = dp2 + dp3;
			continue;
		}
		if (cases == 1) {
			dp2 = dp1 + dp3;
			continue;
		}
		if (cases == 2) {
			dp3 = dp1 + dp2;
		}
	}

	switch (cases) {
	case 0:
		cout << dp1;
		break;
	case 1:
		cout << dp2;
		break;
	case 2:
		cout << dp3;
		break;
	}

}