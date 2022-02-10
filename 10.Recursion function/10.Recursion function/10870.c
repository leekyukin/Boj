//
//  10870.c
//  10.Recursion function
//
//  Created by 이규진 on 2022/02/10.
//

#include <stdio.h>

int fibo(int n) {
    if (n < 2) return n;
    return fibo(n-1) + fibo(n-2);
}

int main(void) {
    
    int n;
    scanf("%d", &n);
    printf("%d", fibo(n));
}
