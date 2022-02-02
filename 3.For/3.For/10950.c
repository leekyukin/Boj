//
//  10950.c
//  3.For
//
//  Created by 이규진 on 2022/02/02.
//

#include <stdio.h>

int main(void) {
    
    int n;
    
    int n1[100];
    int n2[100];
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &n1[i]);
        scanf("%d", &n2[i]);
    }
    
    for(int i = 0; i < n; i++)
        printf("%d\n", n1[i] + n2[i]);
}
