//
//  10871.c
//  3.For
//
//  Created by 이규진 on 2022/02/02.
//

#include <stdio.h>

int main(void) {
    
    int n, x;
    
    scanf("%d %d", &n, &x);
    
    int a;
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a < x) printf("%d ", a);
    }
}
