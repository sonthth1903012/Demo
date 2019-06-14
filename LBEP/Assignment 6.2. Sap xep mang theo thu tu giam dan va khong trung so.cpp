#include <stdio.h>

int main(){
	int n,temp;
	printf("Nhap n = ");
	scanf("%d",&n);
	printf("Nhu vay co %d so trong mang \n",n);
	int array[n];
	for(int i=0;i<n;i++){
		printf("Nhap gia tri array[%d] = ",i);
		scanf("%d",&array[i]);
		for(int j=0;j<i;j++){
			if(array[j]==array[i]){
				i--;
				break;
			}
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(array[j]<array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;			
			}
		}
	}
	printf("Thu tu sap xep cua %d so trong mang la: \n",n);
	for(int i=0;i<n;i++){
		printf("%d, ",array[i]);
	}
	return 0;
}
