//
//  10872.c
//  10.Recursion function
//
//  Created by 이규진 on 2022/02/10.
//

#include <stdio.h>
int sum = 1;

int fac(int n) {
    if (n == 0) return sum;
    sum *= n;
    return fac(n-1);
}

int main(void) {
    
    int n;
    scanf("%d", &n);
    printf("%d",fac(n));
}
