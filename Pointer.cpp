//
// Created by seka5 on 4/26/2021.
//

#include <stdio.h>
#include <cstdlib>
void update(int *a,int *b) {
    int temp=*a;
    *a=*a+*b;
    *b=abs(temp-*b);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}