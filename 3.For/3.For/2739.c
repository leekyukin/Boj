//
//  2739.c
//  3.For
//
//  Created by 이규진 on 2022/02/02.
//

#include <stdio.h>

int main(void) {
    
    int n;
    
    scanf("%d", &n);
    
    for(int i = 1; i < 10; i++)
        printf("%d * %d = %d\n", n, i, n * i);
    
}
