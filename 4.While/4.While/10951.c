//
//  10951.c
//  4.While
//
//  Created by on 2022/02/02.
//

#include <stdio.h>

int main(void){
    int a, b;
    while (scanf("%d %d", &a, &b) != -1) {
        printf("%d\n", a + b);
    }
}
