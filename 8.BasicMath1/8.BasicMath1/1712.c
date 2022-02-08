//
//  1712.c
//  8.BasicMath1
//
//  Created by 이규진 on 2022/02/08.
//

#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (b >= c) {
        printf("%d", -1);
        return 0;
    }
    
    long long int income = 1, cost = -1, i;
    
    for(i = 0; cost < income; i++) {
        income = a + i * b;
        cost = c * i;
    }
    
    printf("%lld", i);
}
