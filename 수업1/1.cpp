#include <string>
#include <iostream>

int main() {
	std::string string_ = "this is a test sentence";
	std::cout << string_.substr(string_.find("sentence"), 8);
}