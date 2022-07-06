#include <iostream>
#include <vector>

using namespace std;

int funcfunc(vector<int>& arr) {
	int sol = 45;
	for (int i = 0; i < arr.size(); i++) {
		sol -= arr[i];
	}
	return sol;
}