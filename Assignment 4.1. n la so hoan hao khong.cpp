#include <stdio.h>

int main(){
	int m,n,s;
	printf("Nhap 1 so bat ky m = ");
	scanf("%d",&m);
	for(n=1;n<m;n++){
		s=0;
		for(int a=1;a<n;a++){
			if(n%a==0){
				s = s + a;
			}
		}
		if(s==n){
			printf("%d la so hoan hao\n",s);
		}
	}
	return 0;
}
