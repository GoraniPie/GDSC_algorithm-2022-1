#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

int main() {
	std::string license_plate = "24°¡ 2210";
	for (int i = license_plate.length() - 4; i < license_plate.length(); i++) {
		printf("%c", license_plate[i]);
	}
}