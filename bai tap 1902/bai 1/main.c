#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void showinfor(char ten[20], char tuoi [20], char diachi[20], char email[20], char sdt[20]) {
	printf("|%-20s|%-20s|%-20s|%-20s|%-20s|", ten, tuoi, diachi, email, sdt);
}

int main(int argc, char *argv[]) {
	char ten[20], tuoi [20], diachi[20], email[20], sdt[20];
	printf("\nNhap ten: ");
	gets(ten);
	printf("\nNhap tuoi: ");
	gets(tuoi);
	printf("\nNhap diachi: ");
	gets(diachi);
	printf("\nNhap email: ");
	gets(email);
	printf("\nNhap sdt: ");
	gets(sdt);
	char a[20] = "Ten";
	char b[20] = "Tuoi";
	char c[20] = "Dia chi";
	char d[20] = "Email";
	char e[20] = "So dien thoai";
	printf("\n|%-20s|%-20s|%-20s|%-20s|%-20s|\n", a, b, c, d, e);	
	showinfor(ten, tuoi, diachi, email, sdt);
	return 0;
}
