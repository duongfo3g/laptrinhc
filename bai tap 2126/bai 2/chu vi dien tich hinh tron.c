#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r, chuvi, dientich;
	printf("Nhap ban kinh hinh tron r = ");
	scanf("%f",&r);
	chuvi = 3.14*2*r;
	dientich= 3.14*r*r;
	printf("\nChu vi hinh tron = %f",chuvi);
	printf("\nDien tich hinh trong = %f", dientich);
	return 0;
}
