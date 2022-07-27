#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	string input;
	cin >> input;
	const int inputlength = input.length();
	vector<int> arr(inputlength);
	for (int i = 0; i < inputlength; i++) {
		arr[i] = input[i] - '0';
	}

	sort(arr.begin(), arr.end(), greater<int>());

	for (int i = 0; i < inputlength; i++) {
		cout << arr[i];
	}

}