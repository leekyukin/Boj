//
//  14681.c
//  2.If
//
//  Created by 이규진 on 2022/02/01.
//

#include <stdio.h>

int main(void) {
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    if (x > 0 && y > 0) printf("%d", 1);
    else if (x < 0 && y >0) printf("%d", 2);
    else if (x <0 && y <0) printf("%d", 3);
    else printf("%d", 4);
}
