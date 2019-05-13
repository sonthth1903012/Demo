#include <stdio.h>

int main(){
	int array[10],temp;
	for(int i=0;i<10;i++){
		printf("Nhap array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	for(int i=0;i<9;i++){
		if(array[i]>array[i+1]){
			temp = array[i];
			array[i] = array[i+1];
			array[i+1] = temp;
		}
	}
	printf("So nho nhat trong mang la %d \n",array[0]);
	printf("So lon nhat trong mang la %d \n",array[9]);
	return 0;
}
