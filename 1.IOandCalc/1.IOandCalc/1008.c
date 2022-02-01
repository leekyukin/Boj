//
//  1008.c
//  OandCalc
//
//  Created by 이규진 on 2022/02/01.
//

#include <stdio.h>

int main(void) {
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    printf("%.13lf", n1 / (n2 + 0.0));
}
