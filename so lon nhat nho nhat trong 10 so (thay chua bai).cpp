#include <stdio.h>

int main(){
	int array[10];
	int x=array[0],y=0,a=array[0],b=0;
	for(int i=0;i<10;i++){
		printf("Nhap gia tri cua array[%d] = ",i);
		scanf("%d",&array[i]);
	}
	for(int i=1;i<10;i++){
		
		if(array[i]>x){
			x = array[i];
			y = i;
		}	
		if(array[i]<a){
			a = array[i];
			b = i;		
		}
	}
	printf("So lon nhat la array[%d] = %d \n",y,x);
	printf("So nho nhat la array[%d] = %d \n",b,a);
	return 0;
}
