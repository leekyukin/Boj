//
//  15596.c
//  6.Function
//
//  Created by 이규진 on 2022/02/05.
//

#include <stdio.h>

long long sum(int *a, int n);

int main(void) {
    int n;
    scanf("%d", &n);
    
    int a[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    printf("%lld", sum(a, n));
}

long long sum(int *a, int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
