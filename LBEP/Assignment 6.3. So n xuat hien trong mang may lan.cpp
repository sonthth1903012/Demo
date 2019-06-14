#include <stdio.h>

int main(){
	int array[10],n,count=0;
	for(int i=0;i<10;i++){
		printf("Nhap gia tri array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	printf("Nhap gia tri so can tim trong mang n = ");
	scanf("%d",&n);
	for(int i=0;i<10;i++){
		if(n==array[i]){
			count ++;
		}
	}
	printf("So n = %d xuat hien %d lan",n,count);
	return 0;
}
