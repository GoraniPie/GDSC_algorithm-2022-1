#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

int main() {
	std::string phone_number = "010-1111-2222";
	for (int i = 0; i < phone_number.length(); i++) {
		if (phone_number[i] == '-') {
			phone_number.replace(i, 1, " ");
		}
	}
	std::cout << phone_number;
}