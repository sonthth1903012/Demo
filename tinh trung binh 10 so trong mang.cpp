#include <stdio.h>

int main(){
	int array[10];
	for(int i=0;i<10;i++){
		printf("Nhap array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	int S = 0;
	for (int i=0;i<10;i++){
		S += array[i];
	}
	float x;
	x = (float)S/10;
	printf("Gia tri trung binh: %f \n",x);
	return 0;
}
