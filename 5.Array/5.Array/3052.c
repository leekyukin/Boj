//
//  3052.c
//  5.Array
//
//  Created by 이규진 on 2022/02/04.
//

#include <stdio.h>

int count[42];

int main(void) {
    
    int arr[10];
    
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        int n = arr[i] % 42;
        count[n]++;
    }
    
    int c = 0;
    
    for(int i = 0; i < 42; i++) {
        if (count[i] != 0)
            c++;
    }
    
    printf("%d", c);
    
    
    
    
    
}
