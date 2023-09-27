#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	typedef struct sinhvien {
		char name[50], rollno[20];
		int age;
	} sv;

int main(int argc, char *argv[]) {
	int N;
	printf("Nhap N = ");
	scanf("%d", &N);
	sv list[N];
	
	int i;
	for(i = 0; i < N; i++) {
		printf("\nNhap thong tin sinh vien %d", i+1);
		printf("\nTen sinh vien: ");
		fflush(stdin);fflush(stdout);
		gets(list[i].name);
		printf("\nMa sinh vien: ");
		fflush(stdin);fflush(stdout);
		gets(list[i].rollno);
		printf("\nTuoi: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &list[i].age);	
	}
	int check = 0, j;
	printf("\nThong tin sinh vien co tuoi la so chinh phuong: ");
	for(i = 0; i < N; i++) {
		for(j = 0; j*j <= list[i].age; j++) {
			if (j*j == list[i].age) {
				printf("\n%s-%s-%d", list[i].name, list[i].rollno, list[i].age);
				check = 1;
			}
		}
	}
	if (check ==0) {
		printf("Khong co sinh vien thoa man");
	}
	
	return 0;
}
