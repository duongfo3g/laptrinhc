#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct ST_Sinhvien {
	char name[50], rollno[20];
	int age;
} Sinhvien;

void test01() {
	FILE *fp;
	Sinhvien sv;
	
	fp = fopen("myinfor.txt", "a");
	if (ferror(fp)) {
		printf("\nMo file bi loi");
	} else {
		int age;
		printf("\nNhap ten: ");
		fflush(stdin);fflush(stdout);
		gets(sv.name);
		printf("\nNhap ma sinh vien: ");
		fflush(stdin);fflush(stdout);
		gets(sv.rollno);
		printf("\nNhap tuoi: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &sv.age);
		printf("Ten: %s, ma sinh vien: %s, tuoi: %d", sv.name, sv.rollno, sv.age);
		fputs("\n", fp);
		fputs(sv.name, fp);
		fputs("\n", fp);
		fputs(sv.rollno, fp);
		fputs("\n", fp);
		fprintf(fp, "%d", sv.age);	
	}
	
	fclose(fp);
}

int main(int argc, char *argv[]) {
	test01();
	return 0;
}
