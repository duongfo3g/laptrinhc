#include <stdio.h>
#include <stdlib.h>
#include "array.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choose;
	do {
		showMenu;
		
		fflush(stdin); fflush(stdout);
		scanf("%d", &choose);
		
		switch(choose) {
			case 1: {
				input();
				break;
			}
			case 2: {
				giaithua();
				break;
			}
			case 3: {
				tong1N();
				break;
			}
			case 4: {
				sosanh();
				break;
			}
			case 5: {
				printf("Thoat");
				break;
			}
			default: {
				printf("Nhap sai");
				break;
			}
		}
		
	} while(choose != 5);
	return 0;
}
