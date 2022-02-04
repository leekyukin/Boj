//
//  2577.c
//  5.Array
//
//  Created by 이규진 on 2022/02/03.
//

#include <stdio.h>

int count[10];

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int n = a * b * c;
    
    while(n % 10 != 0 || n / 10 != 0) {
        int t = n;
        t %= 10;
        count[t]++;
        n /= 10;
    }
    
    for(int i =0; i < 10; i++)
        printf("%d\n", count[i]);
}
