#include <iostream>
#include <algorithm>
#include <vector>

int main() {

	int N;
	std::cin >> N;

	std::vector<short> arr(N);

	for (int i = 0; i < N; i++) {
		std::cin >> arr[i];
	}

	std::sort(arr.begin(), arr.end());

	for (int i = 0; i < N; i++) {
		std::cout << arr[i] << "\n";
	}
}