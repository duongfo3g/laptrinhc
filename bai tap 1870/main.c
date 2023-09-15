#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,delta,x,x1,x2;
	
	printf("Nhap a = ");
	scanf("%f", &a);
	printf("Nhap b = ");
	scanf("%f", &b);
	printf("Nhap c = ");
	scanf("%f", &c);

	if (a==0) {
		if (b==0) {
			if (c==0) {
				printf ("Phuong trinh vo so nghiem");
			}
			else {
				printf ("Phuong trinh vo nghiem");
			}
		}
		else {
			printf ("Phuong trinh co 1 nghiem x = %f", -c/b);
		}
	}
	else {
		delta = b*b-4*a*c;
		if (delta >0) {
			x1 = (-b+sqrt(delta))/(2*a);
			x2 = (-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co nghiem kep x1 = %f, x2 = %f",x1,x2);			
		}
		else {
			if (delta < 0) {
				printf ("Phuong trinh vo nghiem");
			}
			else {
				x = -b/(2*a);
				printf("Phuong trinh co nghiem kep x1 = x2 = %f", x);
			}
		}
	}
	return 0;
}
