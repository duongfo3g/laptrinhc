#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bai 1
	int N;
	printf("Nhap N = ");
	scanf("%d", &N);
	
	if (N % 2== 0) {
		printf("\nN la so chan");
	}
	else {
		printf("\nN la so le");
	}
	
	if (N % 2== 0 && N % 7 == 0) {
		printf("\nN chia het cho 2 va 7");
	}
	else {
		printf("\nN khong dong thoi chia het cho 2 va 7");
	}
	
	
	if (N==2) {
		printf("\nN la so nguyen to");
	}
	else {
		int i = 2;
		int mark = 0;
		while (i < sqrt(N)) {
			if(N % 2 == 0) {
				mark = 1;
				break;
			}
			i++;
		}
		if (mark == 0) {
			printf("\nN la so nguyen to");
		}
		else {
			printf("\nN khong la so nguyen to");
		}
	}
	
	//bai 2
	fflush(stdin); fflush(stdout);
	int a, b, i;
	int sum;
	printf ("Nhap vao a, b = ");
	scanf("%d %d", &a, &b);
	if (abs(a-b) < 2) {
		printf("Vui long nhap a va b cach nhau toi thieu 2 don vi");
	}
	else if (a < b) {
		for (i = a; i < b; i++) {
			sum+=i;
		}
	}
	else {
		for (i = b; i < a; i++) {
			sum+=i;
		}
	}
	printtf("Tong cac so trong khoang a va b = %d", sum);
	return 0;
}
