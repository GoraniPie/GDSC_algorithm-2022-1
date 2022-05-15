#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

int main() {
	std::u16string string_ = u"Ȧ¦Ȧ¦Ȧ¦";
	for (int i = 0; i < string_.length(); i++) {
		if (string_[i] == u'Ȧ') {
			printf("Ȧ");
		}
	}
}