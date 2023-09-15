#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//bai 1
	float n1,S1;
	S1 = 0;
	printf("Nhap n1 = ");
	scanf("%f",&n1);
	
	if (n1 > 0) {
		float i = 1;
		while (i <= n1) {
		S1 = S1 + i;
		i++;
		}
	printf("\nTong S(n) = 1 + 2 + 3 + . . . + n = %f", S1);
    }
    else {
    	printf("Vui long nhap gia tri n1 > 0");
	}
	
	
	//bai 2
	float n2,S2;
	S2 = 0;
	printf("\nNhap n2 = ");
	scanf("%f",&n2);
	
	if (n2 > 0) {
		float i = 1;
		while (i <= n2) {
		S2 = S2 + i*i;
		i++;
		}
	printf("\nTong S(n) = 1^2 + 2^2 + . . . + n^2 = %f", S2);
    }
    else {
    	printf("Vui long nhap gia tri n2 > 0");
	}
	
	//bai 3
	float n3,S3;
	S3 = 0;
	printf("\nNhap n3 = ");
	scanf("%f",&n3);
	
	if (n3 > 0) {
		float i = 1;
		while (i <= n3) {
		S3 = S3 + 1/i;
		i++;
		}
	printf("\nTong S(n) = 1 + 1/2 + 1/3 + . . . + 1/n = %f", S3);
    }
    else {
    	printf("Vui long nhap gia tri n3 > 0");
	}
		
	//bai 4
	float n4,S4;
	S4 = 0;
	printf("\nNhap n4 = ");
	scanf("%f",&n4);
	
	if (n4 > 0) {
		float i = 1;
		while (i <= n4) {
		S4 = S4 + 1/(2*i);
		i++;
		}
	printf("\nTong S(n) = 1/2 + 1/4 + . . . + 1/2n = %f", S4);
    }
    else {
    	printf("Vui long nhap gia tri n4 > 0");
	}
	
	//bai 5
	float n5,S5;
	S5 = 0;
	printf("\nNhap n5 = ");
	scanf("%f",&n5);
	
	if (n5 > 0) {
		float i = 0;
		while (i <= n5) {
		S5 = S5 + 1/(2*i+1);
		i++;
		}
	printf("\nTong S(n) = 1/2 + 1/4 + . . . + 1/(2n+1) = %f", S5);
    }
    else {
    	printf("Vui long nhap gia tri n4 > 0");
	}
	
	return 0;
}
