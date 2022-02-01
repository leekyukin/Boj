//
//  1330.c
//  2.If
//
//  Created by 이규진 on 2022/02/01.
//

#include <stdio.h>

int main(void) {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if (a>b) printf(">");
    else if (a == b) printf("==");
    else printf("<");
    
    return 0;
}
