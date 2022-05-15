#include <algorithm>
#include <vector>
#include <iostream>

int main() {
	std::vector<int> nums = { 1, 2, 3, 4, 5, 6, 7 };
	std::cout << "max:  " << *std::max_element(nums.begin(), nums.end()) << "\n";
	std::cout << "min:  " << *std::min_element(nums.begin(), nums.end());
}