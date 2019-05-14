#include <stdio.h>

int main(){
	int a, b, c=0;
	do{
		printf("Nhap mot so tu nhien bat ky: ");
		scanf("%d",&a);
	}
	while(a<0);
	
	printf("Cac uoc cua so %d la: ",a);
	for(b=1;b<=a;b=b+1){
		if(a%b==0){
			printf("%d, ",b);
			c = c + 1;
		}
		else{
			continue;
		}
	}
	printf("\nSo %d co %d uoc ",a,c);
	if(c==2){
		printf("-> la so nguyen to",a);
	}
	else if(c<2){
		printf("-> khong phai la so nguyen to cung khong phai la hop so",a);
	}
	else{
		printf("-> la hop so",a);
	}

	return 0;
}
