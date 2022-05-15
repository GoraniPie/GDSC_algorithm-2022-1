#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
int main() {
	
	std::string input_;
	std::cin >> input_;

	int input_length = input_.length();
	std::vector<int> arr(input_length);

	// 배열에 입력값 저장, 배열 리턴하는 것처럼 보이게 하기
	std::cout << "[";
	for (int i = input_length - 1, j = 0; i > -1; i--, j++) {
		arr[j] = input_[i] - '0';
		if (i == 0) {
			std::cout << arr[j];
			break;
		}
		std::cout << arr[j] << ", ";
	}
	std::cout << "]";

}