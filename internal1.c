#include <stdio.h>
#include <stdlib.h>

typedef struct Player {
	int player;
	int cap;
} Player;

Player *build = NULL;
#define T 20

int max(int *count) {
	int i;
	int max = count[0];
	for(i = 1; i < sizeof(count)/sizeof(int); i++) {
		if(max < count[i]) {
			max = count[i];
		}
	}
	return max;
}

int equal(int a, int b) {
	if(a == b) {
		return 1;
	}
	return 0;
}

int longest(Player *U) {
	int i, j;
	int size = T;
	int count[T] = {0};
	for(i = 0; i < size; i++) {
		for(j = 0; j < size; j++) {
			if(equal(U[i].cap, U[j].cap) == 1) {
				count[i] += 1;
			}
		}
	}
	return (max(count) - 1);
}

int main() {
	build = malloc(sizeof(Player) * T);
	
	for(int i = 0; i < T; i++) {
		build[i].player = i;
		build[i].cap = rand() % 10;
		printf("%d\t%d\n", build[i].player, build[i].cap);
	}
	printf("\n");
	printf("%d\n", longest(build));
}