//
//  2750.c
//  12.Sort
//
//  Created by 이규진 on 2022/02/10.
//

#include <stdio.h>

int main(void) {
    
    int n;
    scanf("%d", &n);
    int list[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", list + i);
    
    for(int i = n; i > 0; i--) {
        for(int j = 0; j < n - 1; j++) {
            if (list[j] > list[j+1]) {
                int tmp = list[j];
                list[j] = list[j+1];
                list[j+1] = tmp;
            }
        }
    }
    
    for(int i = 0; i < n; i++)
        printf("%d\n", list[i]);
}
