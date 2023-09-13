#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[50];
	printf("Nhap ten = ");
	scanf("%s", &name);
	fflush(stdin);fflush(stdout);	
	int age;
	printf("\nNhap tuoi = ");
	scanf("%d", &age);
	fflush(stdin);fflush(stdout);
	char rollno[16];
	printf("\nNhap ma sinh vien = ");
	scanf("%s", &rollno);
	fflush(stdin);fflush(stdout);	
	char address[200];
	printf("\nNhap dia chi = ");
	scanf("%s", &address);	
	fflush(stdin);fflush(stdout);
	char ten[20]="Ten";
	char tuoi[20]="Tuoi";
	char masinhvien[20]="Ma sinh vien";
	char diachi[20]="Dia chi";		
	fflush(stdin);fflush(stdout);	
	printf("\n=============================");
	printf("\n|%-20s|%-20s|%-20s|%-20s", ten, tuoi, masinhvien, diachi);
	printf("\n=============================");
	printf("\n|%-20s|%-20d|%-20s|%-20s", name, age, rollno, address);
	
	return 0;
}
