#include <stdio.h>

int main(){
	int array[4][4],s[4]={0,0,0,0};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Nhap gia tri cua array[%d][%d] = ",i,j);
			scanf("%d",&array[i][j]);
			s[i] = s[i] + array[i][j];
		}
	}
	printf("Gia tri cua mang la: \n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%5d",array[i][j]);
		}
	printf("\n");
	}
	printf("Gia tri cua mang s la: ");
	for(int i=0;i<4;i++){
		printf("%5d",s[i]);
	}
	int max = s[0],vitri;
	for(int i=1;i<4;i++){
		if(max<s[i]){
			max = s[i];
			vitri = i;
		}
	}
	printf("\nHang co tong gia tri lon nhat = %d o hang chi so %d",max,vitri);
	return 0;
}
