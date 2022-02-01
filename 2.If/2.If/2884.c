//
//  2884.c
//  2.If
//
//  Created by on 2022/02/01.
//

#include <stdio.h>

int main(void) {
    int h, m, n;
    
    scanf("%d %d", &h, &m);
    
    if (m - 45 >= 0) printf("%d %d", h, m - 45);
    else {
        n = m - 45;
        m = 60 + n;
        if (h > 0) h--;
        else h = 24 - 1;
        printf("%d %d", h, m);
    }
}

