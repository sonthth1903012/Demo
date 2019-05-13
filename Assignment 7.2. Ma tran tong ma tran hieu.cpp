#include <stdio.h>

int main(){
	int m,n;
	printf("Nhap gia tri cua m = ");
	scanf("%d",&m);
	printf("Nhap gia tri cua n = ");
	scanf("%d",&n);
	int matran1[m][n],matran2[m][n],matrantong[m][n],matranhieu[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap gia tri cua matran1[%d][%d] = ",i,j);
			scanf("%d",&matran1[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap gia tri cua matran2[%d][%d] = ",i,j);
			scanf("%d",&matran2[i][j]);
		}
	}
	printf("Gia tri cua ma tran 1 la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",matran1[i][j]);
		}
		printf("\n");
	}
	printf("Gia tri cua ma tran 2 la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",matran2[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			matrantong[i][j] = matran1[i][j] + matran2[i][j];
			matranhieu[i][j] = matran1[i][j] - matran2[i][j];
		}
	}
	printf("Gia tri cua ma tran tong la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",matrantong[i][j]);
		}
		printf("\n");
	}
	printf("Gia tri cua ma tran hieu la: \n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%5d",matranhieu[i][j]);
		}
		printf("\n");
	}
	return 0;
}
