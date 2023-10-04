#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct book_st {
	char ten[30], theloai[30];
	int giatien, namxuatban;
} Book;

Book bookList[3];

void showMenu() {
	printf("\n1. Nhap du lieu cua tung quyen sach");
	printf("\n2. Sap xep, hien thi thong tin chi tiet cua tung quyen sach theo the loai (Z->A). Thong ke sach theo nam xuat ban");
	printf("\n3. Tim quyen sach theo the loai");
	printf("\n4. Ghi vao tap tin nhi phan book.dat");
	printf("\n5. Thoat");
	printf("\nChon ");
}

void input() {
	int i;
	for (i = 0; i < 3; i++) {
		printf("\nNhap du lieu quyen sach %d: ", i+1);
		printf("\nTen: ");
		fflush(stdin);fflush(stdout);
		gets(bookList[i].ten);
		printf("\nThe loai: ");
		fflush(stdin);fflush(stdout);
		gets(bookList[i].theloai);
		printf("\nGia tien: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &bookList[i].giatien);
		printf("\nNam xuat ban: ");
		fflush(stdin);fflush(stdout);
		scanf("%d", &bookList[i].namxuatban);
	}
}

void sort() {
	int i, j;
	Book tam;
	for (i = 0; i < 2; i++) {
		for (j = i + 1; j < 3; j++) {
			if(strcmp(bookList[i].ten, bookList[j].ten) < 0) {
				tam = bookList[i];
				bookList[i] = bookList[j];
				bookList[j] = tam;
			}
		}
	}
}

void Show() {
	int i, j;
	int nam[2023] = {0};
	printf("\n%s|%-30s|%-30s|%-20s|%-15s|", "STT", "Ten", "The loai", "Gia tien", "Nam xuat ban");
	for(i = 0; i < 3; i++) {
		printf("\n00%d|%-30s|%-30s|%-20d|%-15d|", i+1, bookList[i].ten, bookList[i].theloai, bookList[i].giatien, bookList[i].namxuatban);
	}
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 2023; j++) {
			
		}
		printf("\nNam %d co %d quyen sach", bookList)
	}
}

int main(int argc, char *argv[]) {
	int choose;
	do {
		showMenu();
		scanf("%d", &choose);
		switch(choose) {
			case 1: {
				input();
				break;
			}
			case 2: {
				sort();
				Show();
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
				
				break;
			}
			case 5: {
				printf("\nThoat!");
				break;
			}
			default: {
				printf("\nNhap sai!");
				break;
			}
		}
		
	} while (choose != 5);
	return 0;
}
