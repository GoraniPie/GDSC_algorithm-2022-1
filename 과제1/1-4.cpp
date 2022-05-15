#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

int main() {
	std::string string_ = "PYTHON";
	for (int i = string_.length() - 1; i > -1; i--) {
		printf("%c", string_[i]);
	}
}