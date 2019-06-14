#include <stdio.h>

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	printf("Cac so nguyen to nho hon n la: ");
	for(int i=2;i<n;i++){
		int x = 0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				x++;
			}
		}
		if(x==2){
			printf("%d, ",i);
		}
	}
	return 0;
}
