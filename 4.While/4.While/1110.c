//
//  1110.c
//  4.While
//
//  Created by 이규진 on 2022/02/02.
//

#include <stdio.h>

int main(void) {
    int n, count = 0;
    scanf("%d", &n);
    int tmp = n;
    while (n >= 0 && n  <= 99) {
        count++;
        
        int f = n / 10;
        int b = n % 10;

        n = (f + b) % 10;
        n = b * 10 + n;
        if (tmp == n) break;
    }
    printf("%d\n", count);
}
