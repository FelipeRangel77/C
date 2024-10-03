#include <stdio.h>


void trocar(int *pa, int *pb);

int main(void) {
    int a = 10, b = 20;
    trocar(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}

void trocar(int *pa, int *pb) {
    int tmp = *pb;
    *pb = *pa;
    *pa = tmp;
}

int main(void) {
    int a[5] = {1,2,3,4,5};
    int b = 10;
    int *pa;
    int *pb;

    printf("%d\n", *a);
    printf("%d\n", *(a + 1));
    printf("%d\n", *(a + 2));
    printf("%d\n", *(a + 3));
    printf("%d", *(a + 4));
    return 0;
}