#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, i, sum = 0;
	printf("\nNhap N = ");
	scanf("%d", &N);
	
	//nhap vao mang N so nguyen
	int t[N];
	for (i = 0; i < N; i++) {
		printf("\nNhap t[%d] = ", i);
		scanf("%d", &*(t+i));
	}

	for (i = 0; i < N; i++) {
		if (*(t+i) % 5 == 0) {
			sum += *(t+i);
		}
	}
	printf("\nTong cac so chia het cho 5 = %d", sum);
	
	//in ra cac so chinh phuong
	int j;
	int check = 0;
	printf("\nCac so chinh phuong: ");
	for (i = 0; i < N; i++) {
		for (j = 0; j*j <= *(t+i); j++) {
			if (j*j == *(t+i)) {
				printf("%d ", *(t+i));
				check = 1;
			}
		}
	}
	if (check ==0) {
		printf("Khong co so chinh phuong");
	}
	
	//sap xep phan tu chan dau mang, phan tu le cuoi mang
	int tam;
	printf("\nSap xep phan tu chan dau mang, phan tu le cuoi mang: ");
	for (i = 0; i < N; i++) {
		j = i + 1;
		for (j; j < N; j++) {
			if (t[i] % 2 != 0 & t[j] % 2 == 0) {
				tam = t[i];
				t[i] = t[j];
				t[j] = tam;
			}
		}
		printf("%d  ", t[i]);
	}
	
	
	
		
	

	return 0;
}
