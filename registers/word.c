#include <stdio.h>

int main(void) {
    int x, *p;
    p = &x;
    printf("Enter a int value for x: ");
    scanf("%d",&x);

    printf("x = %d\n",x);
    printf("x = %d\n",*p);
    printf("x address = %p\n",p);
    return 0;
}