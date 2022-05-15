#include <vector>
#include <iostream>
#include <string>

int main() {
	std::vector<std::string> lang1 = { "C", "C++", "JAVA" };
	std::vector<std::string> lang2 = { "Python", "Go", "C#" };
	std::vector<std::string> langs;
	langs.insert(langs.end(), lang1.begin(), lang1.end());
	langs.insert(langs.end(), lang2.begin(), lang2.end());
	for (int i = 0; i < langs.size(); i++) {
		std::cout << langs[i] << " ";
	}
}