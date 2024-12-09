#include<stdio.h>
int factorial(int number, int result=1){
	for(int i=number;i>0;i--){
		result*=i;
	}
	return result ;
}
int main(){
	int n, lastResult;
	do{
		printf("Nhap so ban muon tinh giai thua cua no: ");
		scanf("%d",&n);
	} while(n<0);
	lastResult= factorial(n);
	printf("Giai thua cua so da nhap la: %d",lastResult);
	return 0;
}
