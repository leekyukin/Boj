//
//  2908.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>
#include <math.h>

// '숫자' - 48 = 숫자
int main(void) {
    char c1[4], c2[4];
    int n1 = 0, n2 = 0;
    
    scanf("%s", c1);
    scanf("%s", c2);
    
    for(int i = 0; i < 3; i++) {
        n1 += pow(10, i) * (c1[i] - 48);
        n2 += pow(10, i) * (c2[i] - 48);
    }
    
    if (n1 > n2) printf("%d", n1);
    else printf("%d", n2);
}
