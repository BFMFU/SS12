#include<stdio.h>
bool perfectNumber(int a){
	int sum=0;
	for (int i = 1; i <= a / 2; i++) {
            if (a % i == 0) {
                sum += i;
            }
    }
    if (sum == a) {
        return true ;
    }
    return false;    
}
int main(){
	int n1,n2;
	printf("Nhap gia tri thu nhat: ");
	scanf("%d",&n1);
	if(perfectNumber(n1)){
	printf("Day la so hoan hao\n");
	} else printf("Day khong phai la so hoan hao\n");
	printf("Nhap gia tri thu hai: ");
	scanf("%d",&n2);
	if(perfectNumber(n2)){
	printf("Day la so hoan hao\n");
	} else printf("Day khong phai la hoan hao\n");
	return 0;
}
