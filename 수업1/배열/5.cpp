#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
	std::vector<std::string> arr = { "닥터 스트레인지", "스플릿", "럭키" };
	arr.push_back("배트맨");
	arr.insert(find(arr.begin(), arr.end(), "닥터 스트레인지") + 1, "슈퍼맨");
	arr.erase(find(arr.begin(), arr.end(), "럭키"));
	arr.erase(find(arr.begin(), arr.end(), "스플릿"));
	arr.erase(find(arr.begin(), arr.end(), "배트맨"));
	//std::cout << arr[0] << "\n" << arr[1];
}