#include <stdio.h>

int main(){
	int a,b,c;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	printf("Nhap so thu ba: ");
	scanf("%d",&c);
	if(a+b>c & a+c>b & b+c>a){
			if(a==b & b==c){
				printf("3 so tren la 3 canh tam giac deu\n");
			}
			else{
				if((a==b & c*c==a*a+b*b) || (c==b&a*a==b*b+c*c) || (a==c&b*b==a*a+c*c)){
					printf("3 so tren la 3 canh tam giac vuong can");
					}
				else if(a==b || b==c || c==a){
					printf(" 3 so tren la 3 canh cua 1 tam giac can\n");
					}
				else if(c*c==a*a+b*b ||a*a==b*b+c*c||b*b==a*a+c*c){
					printf("3 so tren la 3 canh tam giac vuong\n");
					}
				else{
					printf("3 so tren la 3 canh cua 1 tam giac thuong\n");
					}	
				}
			}	
	else{
		printf("3 so tren khong the la 3 canh cua 1 tam giac\n");
	
	}

}
