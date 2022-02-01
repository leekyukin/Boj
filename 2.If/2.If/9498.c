//
//  9498.c
//  2.If
//
//  Created by 이규진 on 2022/02/01.
//

#include <stdio.h>

int main(void) {
    
    int score;
    
    scanf("%d", &score);
    
    if (score >= 90 && score < 101) printf("A");
    else if (score >= 80) printf("B");
    else if (score >= 70) printf("C");
    else if (score >= 60) printf("D");
    else printf("F");
    
    return 0;
}
