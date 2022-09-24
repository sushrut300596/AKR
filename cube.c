#include <stdio.h>

int main() {
	int N = 10;
	int x = 0, n = 0, y = 0, temp = 0;
	while(n != N) {
		x = x + n + n + 1;
		y = y + temp + temp + temp + n + n + n + 1;
		temp = x;
		n++;	
	}
	printf("%d\n", y);
}