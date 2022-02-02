//
//  15552.c
//  3.For
//
//  Created by 이규진 on 2022/02/02.
//

#include <stdio.h>

int main(void) {
    
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
}
