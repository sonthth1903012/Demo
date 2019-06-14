#include <stdio.h>

int main(){
	int array[10];
	float s = 0;
	for(int i=0;i<10;i++){
		printf("Nhap gia tri array[%d] = ",i);
		scanf("%d",&array[i]);
		s += array[i];
	}
	printf("Gia tri trung binh cua 10 so tren la %f",s/10);
	return 0;
}
