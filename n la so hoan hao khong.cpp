#include <stdio.h>

int main(){
	int n,s=0;
	printf("Nhap 1 so bat ky n = ");
	scanf("%d",&n);
	for(int a=1;a<n;a++){
		if(n%a==0){
			s = s + a;
		}
	}
	if(s==n){
		printf("n la so hoan hao");
	}
	else{
		printf("Tong cac uoc cua n la s = %d -> n khong phai so hoan hao",s);
	}
	return 0;
}
