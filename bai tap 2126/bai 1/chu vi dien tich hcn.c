#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int chieudai, chieurong, chuvi, dientich;
	
	printf("Nhap chieu dai HCN = ");
	scanf("%d",&chieudai);
	
	printf("\nNhap chieu rong HCN = ");
	scanf("%d",&chieurong);
	
	chuvi = (chieudai+chieurong)*2;
	dientich = chieudai*chieurong;
	
	printf("\nChu vi HCN = %d", chuvi);
	printf("\nDien tich HCN = %d", dientich);
	
	return 0;
}
