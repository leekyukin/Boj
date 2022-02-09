//
//  1712.c
//  8.BasicMath1
//
//  Created by 이규진 on 2022/02/08.
//

#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(b>=c) printf("%d", -1);
    else printf("%d", a/(c-b) + 1);
}
