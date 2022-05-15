#include <vector>
#include <numeric>
#include <iostream>

int main() {
	std::vector<int> nums = { 1, 2, 3, 4, 5 };
	std::cout << std::accumulate(nums.begin(), nums.end(), 0) / nums.size();
}