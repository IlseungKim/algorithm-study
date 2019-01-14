#include <iostream>
#include <vector>
#include <string.h>

int main() {
	int N;
	std::cin >> N;
	int cnt;
	if (N < 6)std::cout << N << std::endl;
	else {
		int mut = N - 3, base = 3,buffer=0;

		for (int i = 2; i < N; ++i) {
			if ((N - i) / 3 != 0) {
				if (buffer * 3 > base) {//ctrl V, ctrl V, ctrl V
					i += 3;
					base += buffer * 3;
				}
				else {//ctrl A,ctrl C, ctrl V
					i += 3;
					buffer = base;
					base *= 2;
				}
			}
			else {
				if (buffer != 0) {//ctrl V
					base += buffer;
				}
				else {//A
					base += 1;
				}
			}
			
		}
		std::cout << base << std::endl;
	}

	return 0;
}