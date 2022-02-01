//
//  2588.c
//  OandCalc
//
//  Created by 이규진 on 2022/02/01.
//

#include <stdio.h>

int main(void) {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    int s3 = a * (b % 10);
    int s4 = a * (b % 100 / 10);
    int s5 = a * (b / 100);
    int s6 = s3 + s4 * 10 + s5 * 100;
    
    printf("%d\n", s3);
    printf("%d\n", s4);
    printf("%d\n", s5);
    printf("%d\n", s6);
}
h
