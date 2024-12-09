#include<stdio.h>
void print(int arr[], int size){
	printf("Cac gia tri trong mang gom co: ");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main(){
	int n;
	do{
		printf("Nhap so luong gia tri cho mang: ");
		scanf("%d",&n);
	} while(n<0);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap gia tri cho phan tu arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	print(arr, n);
	return 0;
}

