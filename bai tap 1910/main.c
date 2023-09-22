#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, i;
	printf("Nhap N = ");
	scanf("%d", &N);
	
	int t[N];
	for(i = 0; i < N; i++) {
		printf("Nhap t[%d] = ", i);
		scanf("%d", t+i);
	}
	
	
	for(i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			if (t[j] > t [i]) 
		}
	}
	printf("*t = %d", t[0]);
	return 0;
}
