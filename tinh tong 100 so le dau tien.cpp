#include <stdio.h>

int main(){
	int s=0,a=1,i=1;
	while(i<=100){
		s = s + a;
		a = a + 2;
		i = i + 1;
	}
	printf("Lam theo kieu while thi s = %d \n",s);
	
	int x=0,y=1,z=1;
	do {
		x = x + y;
		y = y + 2;
		z = z + 1;
	}
	while(z<=100);
	printf("Lam theo kieu do while cung tuong tu s = %d \n",x);
	
	int p=0,q=1,r;
	for(r=1;r<=100;r=r+1){
		p = p + q;
		q = q + 2;
	}
	printf("Lam theo kieu for thi cung the, s = %d \n",p);
	return 0;
}
