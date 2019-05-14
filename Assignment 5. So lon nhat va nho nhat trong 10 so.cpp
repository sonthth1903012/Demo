#include <stdio.h>

int main(){
	int array[10];
	for(int i=0;i<10;i++){
		printf("Nhap array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	int a = array[0], b = array[0];
	for(int i=1;i<10;i++){
		if(a>array[i]){
			a = array[i];
		}
		if(b<array[i]){
			b = array[i];
		}
	}
	printf("So nho nhat trong mang la %d \n",a);
	printf("So lon nhat trong mang la %d \n",b);
	return 0;
}
