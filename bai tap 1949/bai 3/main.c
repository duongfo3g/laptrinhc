#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	
	//De bai khai bao mang sinh vien p
	//Yeu cau: xay dung menu
	//1. Them N sinh vien
	//2. Hien thi thong tin sinh vien
	//3. Sap xep theo ten A-Z
	//4. Thoat

	
	typedef struct ST_sinhvien {
		char name[50], rollno[20];
		int age;
	} Sinhvien;
	
	void showMenu() {
		printf("\n1.Them N sinh vien");
		printf("\n2.Hien thi thong tin sinh vien");
		printf("\n3.Sap xep theo ten A-Z");
		printf("\n4.Thoat");
		printf("\nChon: ");
	}
	
	int total = 0;	
	Sinhvien *p;
	void input() {
		int i, N;
		printf("Nhap so sinh vien can them: N = ");
		scanf("%d", &N);
		if (total == 0) {
			p = (int *) calloc (N, sizeof(int));
		} else {
			p = (int *) realloc (p, (total + N)*sizeof(int));
		}
		for (i = total; i < total + N; i++) {
			printf("Nhap thong tin sinh vien: ");
			printf("Nhap ten: ");
			fflush(stdin);fflush(stdout);
			gets(p[i].name);
			printf("Nhap ma sinh vien: ");
			fflush(stdin);fflush(stdout);
			gets(p[i].rollno);
		}
	}

int main(int argc, char *argv[]) {

	

	
	
	return 0;
}
