//
//  10952.c
//  4.While
//
//  Created by 이규진 on 2022/02/02.
//

#include <stdio.h>

int main(void) {
    
    int a = 2, b = 2;
    while(1) {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;
        printf("%d\n", a + b);
    }
}
