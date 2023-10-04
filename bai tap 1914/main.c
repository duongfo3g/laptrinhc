#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct ST_Cinema {
	char name[25], address[35];
	int seats;
} Cinema;

void Showmenu() {
	printf("\n1. Nhap du lieu quan ly danh sach rap chieu phim");
	printf("\n2. Hien thi danh sach rap ra man hinh");
	printf("\n3. Tim rap theo so ghe toi thieu");
	printf("\n4. Luu du lieu ra tep cinema.dat");
	printf("\n5. Doc du lieu tu tep cinema.dat");
	printf("\n6. Thoat");
	printf("\nChon ");
}

void input(struct ST_Cinema*cinema) {
	printf("\nNhap ten rap chieu phim: ");
	fflush(stdin);fflush(stdout);
	gets(cinema->name);
	printf("\nNhap dia chi rap: ");
	fflush(stdin);fflush(stdout);
	gets(cinema->address);
	printf("\nNhap so luong ghe: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &cinema->seats);		
}

void output() {
	int i;
	for (i = 0; i < 4; i++) {
		printf("")
	}
}

int main(int argc, char *argv[]) {
	int i;
	Cinema cinemaList[4];
	int choose;
	do {
		Showmenu();
		scanf("%d", &choose);
		switch(choose) {
			case 1: {
				for (i = 0; i < 4; i++) {
					printf("\nNhap thong tin cho rap thu %d:\n", i + 1);
					input(&cinemaList[i]);
				}
				break;
			}
			case 2: {
				
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
				
				break;
			}
			case 5: {
				
				break;
			}
			case 6: {
				
				break;
			}
			default: {
				printf("Nhap sai");
				break;
			}
		}
	} while (choose != 6);
	return 0;
}
