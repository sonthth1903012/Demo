#include <stdio.h>

int main(){
	long long a=0,b=1;
	for(int i=3;i<=20;i+=2){
		a = a + b;
		b = b + a;
	}
	printf("So thu 99 va 100 trong day Fibonaci la %lld, %lld",a,b);
}
