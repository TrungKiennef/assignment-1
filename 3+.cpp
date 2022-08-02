#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
		printf("nhap vao so a");
	scanf("%d",&a);
		printf("nhap vao so b");
	scanf("%d",&b);
	printf("nhap vao so c");
	scanf("%d",&c);
	if(a+b>c){
		printf("a,b,c ko tao len tam giac");
	}else{
	if(b+c>a){
		printf("a,b,c ko tao len tam giac");
	}else{
		if(a+c>b){
			printf("a,b,c ko tao len tam giac");
		}else{
			printf("a,b,c tao len tam giac");
		}
		int d = a+b+c;
		printf("chu vi tam giac la %d",&d);
		int s = sqrt(d/2)*(d/2-a)*(d/2-b)*(d/2-c);
		printf("dien tich tam giac la %s",&s);
	}
	}
}
