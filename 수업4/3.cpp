#include <vector>
#include <iostream>
#include <string>

using namespace std;

double input_avg();

int main() {

	cout << input_avg();

}

double input_avg() {

	string input_;
	vector<int> arr;

	getline(cin, input_);

	int idx = input_.find(' ');
	while (input_.find(' ') != string::npos) {
		arr.push_back(stoi(input_.substr(0, idx + 1)));
		input_.erase(0, idx + 1);
		idx = input_.find(' ');
		if (idx == string::npos) {
			arr.push_back(stoi(input_));
			break;
		}
	}



	
	if (arr.size() == 0) {
		return stoi(input_);
	}
	else {
		double sum = 0;
		for (int i = 0; i < arr.size(); i++) {
			sum += arr[i];
		}
		return sum / arr.size();
	}

	
}