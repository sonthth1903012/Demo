#include <stdio.h>

int main(){
	int a;
	printf("Dien vao so nguyen a bat ky:");
	scanf("%d",&a);
	if(a>0){
		printf("So a = %d la so duong\n",a);
	}
	else if(a==0){
		printf("So a = %d khong la so am hay so duong\n",a);
	}
	else{
		printf("So a = %d la so am\n",a);
	}
}
