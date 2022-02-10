//
//  2869.c
//  8.BasicMath1
//
//  Created by on 2022/02/09.
//

#include <stdio.h>

int main(void) {
    
    int a,b,v;
    scanf("%d %d %d", &a, &b, &v);
//    int acc = 0, i;
//
//    for(i = 1; acc < v; i++) {
//        acc += a;
//        if (acc >= v) break;
//        acc -= b;
//    }
//    printf("%d", i);
    
    printf("%d", v/(a+b) + 1);
}
