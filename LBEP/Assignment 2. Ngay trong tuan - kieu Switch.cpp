#include <stdio.h>

int main(){
	int a;
	printf("Dien so bat ky vao: ");
	scanf("%d",&a);
	switch(a){
		case 2: printf("Hom nay la thu 2");break;
		case 3: printf("Hom nay la thu 3");break;
		case 4: printf("Hom nay la thu 4");break;
		case 5: printf("Hom nay la thu 5");break;
		case 6: printf("Hom nay la thu 6");break;
		case 7: printf("Hom nay la thu 7");break;
		case 8: printf("Hom nay la chu nhat");break;
		default: printf("Khong phai ngay trong tuan");break;
	}
	return 0;
}
