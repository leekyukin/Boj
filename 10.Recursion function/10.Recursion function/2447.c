//
//  2447.c
//  10.Recursion function
//
//  Created by 이규진 on 2022/02/10.
//

#include <stdio.h>

int f(int n) {
    
    if (n == 0) return 0;
    printf("***");
    printf("* *");
    printf("***");
    return n-1;
}

int main(void) {
    
    int n;
    scanf("%d", &n);
    
    f(n);
}
