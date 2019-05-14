#include <stdio.h>

int main(){
	int a,b,c;
	do{
		printf("Cho matran1[a][b],matran2[b][c], dien gia tri a = ");
		scanf("%d",&a);
	}while(a<=0);
	do{
		printf("Cho matran1[a][b],matran2[b][c], dien gia tri b = ");
		scanf("%d",&b);
	}while(b<=0);
	do{
		printf("Cho matran1[a][b],matran2[b][c], dien gia tri c = ");
		scanf("%d",&c);
	}while(c<=0);
	int matran1[a][b], matran2[b][c], matran3[a][c];
	for(int x=0;x<a;x++){
		for(int y=0;y<b;y++){
			printf("Gia tri matran1[%d][%d] = ",x,y);
			scanf("%d",&matran1[x][y]);
		}
	}	
	for(int y=0;y<b;y++){
		for(int z=0;z<c;z++){
			printf("Gia tri matran2[%d][%d] = ",y,z);
			scanf("%d",&matran2[y][z]);
		}
	}	
	printf("Gia tri cua matran1 la: \n");
	for(int x=0;x<a;x++){
		for(int y=0;y<b;y++){
			printf("%5d",matran1[x][y]);
		}
		printf("\n");
	}
	printf("Gia tri cua matran2 la: \n");
	for(int y=0;y<b;y++){
		for(int z=0;z<c;z++){
			printf("%5d",matran2[y][z]);
		}
		printf("\n");
	}
	for(int x=0;x<a;x++){
		for(int z=0;z<c;z++){
			matran3[x][z] = 0;
			for(int y=0;y<b;y++){
				matran3[x][z] += (matran1[x][y]*matran2[y][z]);
			}
		}
	}
	printf("Gia tri cua matran3 = matran1 x matran2 la: \n");
	for(int x=0;x<a;x++){
		for(int z=0;z<c;z++){
			printf("%5d",matran3[x][z]);
		}
		printf("\n");
	}
	return 0;
}
