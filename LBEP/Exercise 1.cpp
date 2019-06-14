#include <stdio.h>

int isPrime(int n){
	if(n<2){
		return 0;
	}
	else{
		int x=0;
		for(int m=1;m<=n;m++){
			if(n%m==0){
				x++;
			}
		}
		if(x==2){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main(){
	int a;
	printf("Please, enter a number: a = ");
	scanf("%d",&a);
	printf("%d",isPrime(a));
}
