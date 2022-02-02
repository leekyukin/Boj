//
//  10818.c
//  5.Array
//
//  Created by 이규진 on 2022/02/02.
//

#include <stdio.h>

int main(void) {
    int n, num;
    
    scanf("%d", &n);
    
    int max = -1000001, min = 1000001;
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &num);
        
        if (num > max) max = num;
        if (num < min) min = num;
    }
    printf("%d %d", min, max);
}
