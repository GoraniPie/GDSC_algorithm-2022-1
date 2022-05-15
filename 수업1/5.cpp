#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {

	std::string input_;
	std::cin >> input_;

	const int input_length = input_.length();

	std::vector<bool> arr(10, false);
	for (int i = 0; i < input_length; i++) {
		if (input_.find("zero") != std::string::npos) {
			input_.replace(input_.find("zero"), 4, "0");
		}
		else {
			arr[0] = false;
		}
		if (input_.find("one") != std::string::npos) {
			input_.replace(input_.find("one"), 3, "1");
		}
		else {
			arr[1] = false;
		}
		if (input_.find("two") != std::string::npos) {
			input_.replace(input_.find("two"), 3, "2");
		}
		else {
			arr[2] = false;
		}
		if (input_.find("three") != std::string::npos) {
			input_.replace(input_.find("three"), 5, "3");
		}
		else {
			arr[3] = false;
		}
		if (input_.find("four") != std::string::npos) {
			input_.replace(input_.find("four"), 4, "4");
		}
		else {
			arr[4] = false;
		}
		if (input_.find("five") != std::string::npos) {
			input_.replace(input_.find("five"), 4, "5");
		}
		else {
			arr[5] = false;
		}
		if (input_.find("six") != std::string::npos) {
			input_.replace(input_.find("six"), 3, "6");
		}
		else {
			arr[6] = false;
		}
		if (input_.find("seven") != std::string::npos) {
			input_.replace(input_.find("seven"), 5, "7");
		}
		else {
			arr[7] = false;
		}
		if (input_.find("eight") != std::string::npos) {
			input_.replace(input_.find("eight"), 5, "8");
		}
		else {
			arr[8] = false;
		}
		if (input_.find("nine") != std::string::npos) {
			input_.replace(input_.find("nine"), 4, "9");
		}
		else {
			arr[9] = false;
		}

		if (std::find(arr.begin(), arr.end(), true) == arr.end()) {
			break;
		}
	}
	std::cout << input_;
}