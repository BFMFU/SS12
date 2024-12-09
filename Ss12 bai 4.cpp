#include<stdio.h>
int seachMax(int arr[], int num,int max=0){
	for (int i=0;i<num;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Gia tri lon nhat trong mang la: %d",max);
	return max;
}
int main(){
	int n;
	do{
		printf("Nhap so luong gia tri cho mang: ");
		scanf("%d",&n);
	} while(n<0);
	int array[n];
	for(int i=0;i<n;i++){
		printf("Nhap gia tri cho phan tu arr[%d]=",i);
		scanf("%d",&array[i]);
	}
	seachMax( array, n);
	return 0;
}
