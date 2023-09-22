#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void showMessage (int msg) {
	printf("Hello %d\n", msg);
}


int main(int argc, char *argv[]) {
	int msg;
	int i;
	for(i = 0; i < 3; i++) {
		printf("Nhap msg = ");
		scanf("%d", &msg);
		showMessage(msg);
	}

	return 0;
}
