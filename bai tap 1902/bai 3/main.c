#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int giaithua(int n) {
	int gt, i;
	gt = 1;
	for(i = 1; i <=n; i++) {
		gt = gt*i;
	}
	return gt;
}

int tinhtong(int m) {
	int sum, i;
	sum = 0;
	for(i = 0; i <=m; i++) {
		sum += i;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	int n, m;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("\nGiai thua N = %d", giaithua(n));
	
	printf("\nNhap m = ");
	scanf("%d", &m);	
	printf("\nTong 1->m = %d", tinhtong(m));	
	
	if (giaithua(n) - tinhtong(m) > 0) {
		printf("\nGiai thua N > Tong 1->m");
	} else if (giaithua(n) - tinhtong(m) < 0) {
		printf("\nGiai thua N < Tong 1->m");		
	} else {
		printf("\nGiai thua N = Tong 1->m");		
	}
	return 0;
}
