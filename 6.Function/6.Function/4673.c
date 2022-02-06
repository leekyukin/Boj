//
//  4673.c
//  6.Function
//
//  Created by 이규진 on 2022/02/05.
//


#include <stdio.h>

int d(int n) {
    int res = n;
    while(n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int main(void) {
    int arr[10001];

    for(int i = 1; i < 10001; i++) {
        if(d(i) < 10001)
            arr[d(i)]=1;
    }
    
    for(int i = 1; i < 10001; i++)
       if(arr[i] != 1)
           printf("%d\n", i);

        
}
