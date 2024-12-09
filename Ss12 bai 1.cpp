#include <stdio.h>
int total(int a, int b) {
    return a + b;
}
int main() {
    int numb1, numb2, sum;
    printf("Nhap so thu nhat: ");
    scanf("%d", &numb1);
    printf("Nhap so thu hai: ");
    scanf("%d", &numb2);
    sum = total(numb1, numb2);
    printf("Tong cua %d va %d la: %d\n", numb1, numb2, sum);
    return 0;
}

