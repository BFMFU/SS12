#include<stdio.h>
#include<math.h>
bool element(int a){
	int prime=0;
    for (int j = 2; j <= sqrt(a); j++) {
        if (a%j==0||a<2) {
        	return false;
        }
	}
	return true;
}
int main(){
	int n1,n2;
	printf("Nhap gia tri thu nhat: ");
	scanf("%d",&n1);
	if(element(n1)){
		printf("Day la so nguyen to\n");
	} else printf("Day khong phai la so nguyen to\n");
	printf("Nhap gia tri thu hai: ");
	scanf("%d",&n2);
	if(element(n2)){
		printf("Day la so nguyen to\n");
	} else printf("Day khong phai la so nguyen to\n");
	return 0;
}
