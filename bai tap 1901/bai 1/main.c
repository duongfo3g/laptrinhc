#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char sn[50];
	printf("Nhap chuoi: ");
	gets(sn);
	printf("\nDo dai chuoi sn = %d", strlen(sn));
	return 0;
}
