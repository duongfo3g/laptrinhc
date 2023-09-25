#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct hinhchunhat {
		float dientich, chieudai, chieurong;
	} hcn;

int main(int argc, char *argv[]) {
	hcn stdlist[5];
	int i;
	for(i = 0; i < 5; i++) {
		printf("\nNhap hcn[%d].chieudai = ", i);
		fflush(stdin);fflush(stdout);
		scanf("%f", &stdlist[i].chieudai);
		printf("\nNhap hcn[%d].chieurong = ", i);
		scanf("%f", &stdlist[i].chieurong);
		stdlist[i].dientich = stdlist[i].chieudai*stdlist[i].chieurong;
		printf("\nDien tich hcn stdlist[%d] = %f", i, stdlist[i].dientich);
	}
	float tongdientich = 0;
	for(i = 0; i < 5; i++) {
		tongdientich = tongdientich + stdlist[i].dientich;
	}
	printf("\nTong dien tich 5HCN = %f", tongdientich);
	return 0;
}
