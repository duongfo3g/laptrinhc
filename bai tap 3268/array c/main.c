#include <stdio.h>
#include <stdlib.h>

void showMenu() {
	printf("\n1. Nhap vao so nguyen N");
	printf("\n2. Tinh N!");
	printf("\n3. Tinh tong 1->N");
	printf("\n4. So sanh N! va tong 1->N");
	printf("\n5. Thoat");
	printf("\nChon: ");
}

void giaithua() {
	int N, i, Ngiaithua = 1;
	printf("Nhap N = ");
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
		Ngiaithua = Ngiaithua * i;
	}
	printf("N! = %d", Ngiaithua);
}

void input() {
	int N;
	printf("Nhap N =");
	scanf("%d", &N);
}

void tong1N() {
	int N, i, tong1N = 0;
	printf("Nhap N = ");
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		tong1N += i;
	}
	printf("Tong 1->N = %d", tong1N);
}

void sosanh() {
	int giaithua, tong1N;
	if (giaithua - tong1N > 0) {
		printf("N! > Tong 1->N");
	} else if (giaithua - tong1N < 0) {
		printf("N! < Tong 1->N");		
	} else {
		printf("N! == Tong 1->N");		
	}
}
