#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[50];	
	char s2[50];
	printf("Nhap chuoi s1 = ");
	gets (s1);
	printf("\nNhap chuoi s2 = ");
	gets (s2);
	strcat(s1,s2);
	puts (s1);
	printf("\nDo dai chuoi s1 = %d", strlen(s1));
	return 0;
}
