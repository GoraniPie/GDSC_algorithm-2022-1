#include <vector>
#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int tmp;
	cin >> n >> m;

	vector<int>arr(100001);

	cin >> arr[0];

	for (int i = 1; i < n; i++) {
		cin >> tmp;
		arr[i] = arr[i - 1] + tmp;
	}
    
	int start, end;

	for (int i = 0; i < m; i++) {
		cin >> start >> end;
		if (start > 1) {
			cout << arr[end - 1] - arr[start - 2] << '\n';
		}
		else {
			cout << arr[end - 1] << '\n';
		}
	}

}