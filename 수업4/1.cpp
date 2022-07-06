#include <iostream>

using namespace std;

void print_love();

int main() {

	for (int i = 0; i < 100; i++) {
		print_love();
	}

}

void print_love() {
	cout << "알고리즘 사랑해\n";
}