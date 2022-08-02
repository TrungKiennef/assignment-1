#include <stdio.h>
int main(){
	int a;
	printf("vui long nhap so a");
	scanf("%d",&a);
	int b;
	printf("vui long nhap so b");
	scanf("%d",&b);
	int c;
	printf("vui long nhap so c");
	scanf("%d",&c);
	if((a>b)&&(a>c)){
		printf("so lon nhat la a");
	}else{
		if((b>c)&&(b>a)){
			printf("so lon nhat la b");
		}else{
			printf("so lon nhat la c");
			
		}
	}
	}
