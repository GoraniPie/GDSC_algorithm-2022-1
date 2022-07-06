#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_max(vector<int>& arr);

int main() {

	vector<int> arr(3);
	print_max(arr);

}

void print_max(vector<int>& arr) {

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	cout << *max_element(arr.begin(), arr.end());

}