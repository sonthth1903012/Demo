#include <stdio.h>

int main(){
	int a,b,c;
	printf("Hay nhap so nguyen a: ");
	scanf("%d",&a);
	printf("Hay nhap so nguyen b: ");
	scanf("%d",&b);
	printf("Hay nhap so nguyen c: ");
	scanf("%d",&c);
	if(a>b){
		if(c>a){
			printf("So c = %d la so lon nhat \n",c);
			printf("So b = %d la so nho nhat \n",b);
		}
		else if(c==a){
			printf("So a = c = %d la so lon nhat \n",a);
			printf("So b = %d la so nho nhat \n",b);
		}
		else{ // c < a va a > b
			printf("So a = %d la so lon nhat \n",a);
			if(c>b){
				printf("So b = %d la so nho nhat \n",b);
			}
			else if(c==b){
				printf("So b = c = %d la so nho nhat \n",b);
			}
			else{ //c<b
				printf("So c = %d la so nho nhat \n",c);
			}
		}
	}
	else if(a==b){
		if(c>a){
			printf("So c = %d la so lon nhat \n",c);
			printf("So a = b = %d la so nho nhat \n",a);
		}
		else if(c==a){
			printf("Ca 3 so bang nhau a = b = c = %d",a);
		}
		else{ //c < a
			printf("So a = b = %d la so lon nhat \n",a);
			printf("So c = %d la so nho nhat \n",c);
		}
	}
	
	else{ //a < b
		if(c<a){
			printf("so b = %d la so lon nhat \n",b);
			printf("So c = %d la so nho nhat \n",c);
		}
		else if(c==a){
			printf("So b = %d la so lon nhat \n",b);
			printf("So a = c = %d la so nho nhat \n",a);
		}
		else{ //a < b va a < c
			printf("So a = %d la so nho nhat \n",a);
			if(c<b){
				printf("So b = %d la so lon nhat \n",b);
			}
			else if(c==b){
				printf("So b = c = %d la so lon nhat \n",b);
			}
			else{ //c > b
				printf("So c = %d la so lon nhat \n",c);
			}
		}	
	}

}
