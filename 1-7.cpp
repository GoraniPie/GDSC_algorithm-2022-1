#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

int main() {
	std::string url = "http://sharebook.kr";
	for (int i = url.length(); i > -1; i--) {
		if (url[i] == '.') {
			std::cout << url.substr(i - 1);
			break;
		}
	}
}