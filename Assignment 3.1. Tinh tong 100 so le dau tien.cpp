#include <stdio.h>

int main(){
	int S=0,i=1,count=0;
	while(count<100){
		S = S + i;
		i+= 2; // 			i = i + 2;
		count++; //			count = count + 1;
	}
	printf("Lam theo kieu while thi S = %d \n",S);
	
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
