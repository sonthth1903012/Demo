#include <stdio.h>
#include <math.h>

int main(){
	int i = 1,c;
	float a,b,d;
	printf("Nhap so tien ban dau a = ");
	scanf("%f",&a);
	printf("Nhap so lai %% tinh theo nam b = ");
	scanf("%f",&b);
	printf("Nhap so nam muon gui c = ");
	scanf("%d",&c);
	printf("Nhap so tien muon nhan duoc sau c nam, d = ");
	scanf("%f",&d);
	if(a==0&b!=0&c!=0&d!=0){
		printf("Muon nhan dc %f vnd sau gui %d nam voi lai suat %f thi can gui so tien ban dau la %f",d,c,b,d/(pow((100+b)/100,c)));
	}
	else if(b==0&a!=0&c!=0&d!=0){
		printf("Muon duoc %f vnd thi ngan hang can tra %f %% 1 nam",d,pow(d/a,1/c)*100 - 100);
		}
	else if(c==0&b!=0&a!=0&d!=0){
		while(a<d){
			a = a + a*b/100;
			i = i + 1;
		}
		printf("Neu muon nhan duoc %f vnd thi phai can %f nam",a,i-1);
	}
	else if(d==0&b!=0&c!=0&a!=0){
		while(i<=c){
			a = a + a*b/100;
			i = i + 1;
		}
		printf("So tien nhan duoc sau %f nam la: d = %f",i-1,a);
	}
	else {
		printf("Chuong trinh bi loi, vui long nhap lai");
	}
	return 0;
}
