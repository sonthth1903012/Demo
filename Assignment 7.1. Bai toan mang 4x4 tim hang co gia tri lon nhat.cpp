#include <stdio.h>

int main(){
	int array[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Nhap gia tri cua array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("Gia tri cua mang la: \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%5d",array[i][j]);
		}
	printf("\n");
	}
	int s[4]={0,0,0,0};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			s[i] = s[i] + array[i][j];
		}
	}
	printf("Gia tri cua mang s la: ");
	for(int i=0;i<4;i++){
		printf("%5d",s[i]);
	}
	int a = s[0],b;
	for(int i=1;i<4;i++){
		if(a<s[i]){
			a = s[i];
			b = i;
		}
	}
	printf("\nHang co tong gia tri lon nhat = %d o hang chi so %d",a,b);
	return 0;
}
