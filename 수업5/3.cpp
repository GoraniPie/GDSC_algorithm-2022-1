#include <iostream>
#include <vector>
#include <string>

using namespace std;

void makehole(vector<vector<char>>& arr, int x, int y, int to);
void printstar(vector<vector<char>>& arr);

int n;

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> n;

	vector<vector<char>> arr(n, vector<char>(n, '*'));


	makehole(arr, 0, 0, n);
	printstar(arr);
	

}

void makehole(vector<vector<char>>& arr, int x, int y, int n) {

	if (n == 1) {
		return;
	}

	for (int i = x + n / 3; i < x + n / 3 * 2; i++) {
		for (int j = y + n / 3; j < y + n / 3 * 2; j++) {
			arr[i][j] = ' ';
		}
	}

	makehole(arr, x, y, n / 3);
	makehole(arr, x + n / 3, y, n / 3);
	makehole(arr, x + n / 3 * 2, y, n / 3);
	makehole(arr, x, y + n / 3, n / 3);
	makehole(arr, x + n / 3, y + n / 3, n / 3);
	makehole(arr, x + n / 3 * 2, y + n / 3, n / 3);
	makehole(arr, x, y + n / 3 * 2, n / 3);
	makehole(arr, x + n / 3, y + n / 3 * 2, n / 3);
	makehole(arr, x + n / 3 * 2, y + n / 3 * 2, n / 3);

}

void printstar(vector<vector<char>>&arr) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
	}
}