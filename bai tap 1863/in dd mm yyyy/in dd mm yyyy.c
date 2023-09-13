#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char dd[2];
	printf("\nNhap ngay = ");
	scanf("%s", &dd);
	
	char mm[2];
	printf("\nNhap thang = ");
	scanf("%s", &mm);
	
	char yyyy[4];
	printf("\nNhap nam = ");
	scanf("%s", &yyyy);	
	
	printf("\nNgay thang nam = %s/%s/%s", dd, mm, yyyy);
		
	return 0;
}
