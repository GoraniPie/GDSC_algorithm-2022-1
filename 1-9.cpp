#include <iostream>
#include <string>

int main() {
	std::string string_ = "abcdfe2a354a32a";
	for (int i = 0; i < string_.length(); i++) {
		if (string_[i] == 'a') {
			string_.replace(i, 1, "A");
		}
	}
	std::cout << string_;
}