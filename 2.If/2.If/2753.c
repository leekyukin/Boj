//
//  2753.c
//  2.If
//
//  Created by 이규진 on 2022/02/01.
//

#include <stdio.h>

int main(void) {
    
    int year;
    scanf("%d", &year);
    
    if (year % 4 == 0 && ((year % 100 != 0) || year % 400 == 0 ))
        printf("%d", 1);
    else printf("%d", 0);
    
}
