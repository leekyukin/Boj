//
//  1063.c
//  6.Function
//
//  Created by 이규진 on 2022/02/05.
//

#include <stdio.h>

int func(int n);

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", func(n));
}

int func(int n) {
    int cnt = 99;
    if (n < 100)
        return n;
    for(int i = 100; i <= n; i++) {
        int h = i / 100;
        int t = (i % 100) / 10;
        int o = i % 10;
        if (h - t == t - o)
            cnt++;
    }
    return cnt;
}

