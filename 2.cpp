#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("nhap so a");
	scanf("%d",&a);
	printf("nhap so b");
	scanf("%d",&b);
	printf("nhap so c");
	scanf("%d",&c);
	int d = b^2 - 4*a*c;
	
	if(d<0){
		printf("phuong trinh vo nghiem");
	}else{
	if(d ==0){
		float x = -(float)b/2*a;
		printf("phong trinh co nghiem x1 = x2 = %f",x);
	}else{
		float x1 = (-b+sqrt(d))/(2*a);
		float x2 = (-b-sqrt(d))/(2*a);
		printf("phuong trinh co nghiem x1 =%f va x2 =%f",x1,x2);
		if(a==0){
			if(b==0){
				if(c==0){
					printf("phuong trinh vo nghiem");
				}else{
					printf("phuong trinh vo nghiem");
				}
			}
		}
	}
	}
}
