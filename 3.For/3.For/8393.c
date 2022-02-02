//
//  8393.c
//  3.For
//
//  Created by 이규진 on 2022/02/02.
//

#include <stdio.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
        sum += i;
    
    printf("%d", sum);
}
