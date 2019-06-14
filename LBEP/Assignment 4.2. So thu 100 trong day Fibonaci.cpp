#include <stdio.h>

int main(){
	//Dãy Fibonaci: 1,1,2,3,5,8,13,21,34,55,89
	long long a=1,b=1;
	int n;
	do{
		printf("Dien so can tim thu n >= 3 trong day Fibonaci, n = ");
		scanf("%d",&n);
	}
	while(n < 3);
	for(int i=3;i<=n;i+=2){
		a = a + b;
		b = b + a;
	}
	printf("So thu %d va %d trong day Fibonaci la %lld, %lld",(n-1)/2*2+1,(n-1)/2*2+2,a,b);
}
