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
	int n,m;
	printf("Please, enter two number: \n");
	printf("n = ");
	scanf("%d",&n);
	printf("m = ");
	scanf("%d",&m);
	int a,b;
	if(m<n){
		a = m;
		b = n;
	}
	else{
		a = n;
		b = m;
	}
	printf("The prime numbers between %d and %d: \n",n,m);
	for(int i=a;i<=b;i++){
		if(isPrime(i)==1){
			printf("%d\n",i);
		}
	}			
}
