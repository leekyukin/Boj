//
//  2292.c
//  8.BasicMath1
//
//  Created by 이규진 on 2022/02/09.
//

#include <stdio.h>

int main(void) {
    int n, out = 1, i;
    scanf("%d", &n);

    if (n == 1) printf("%d", 1);
    else {
        for(i = 1; out < n; i++) {
            out += 6*i;
        }
        printf("%d", i);
    }
}
