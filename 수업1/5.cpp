#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {

	std::string input_;
	std::cin >> input_;

	const std::vector<std::string> arr1 = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	const std::vector<std::string> arr2 = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

	for (int i = 0; i < 10; i++) {
		while (input_.find(arr1[i]) != std::string::npos) {
			input_.replace(input_.find(arr1[i]), arr1[i].length(), arr2[i]);
		}
	}

	std::cout << input_;

}
