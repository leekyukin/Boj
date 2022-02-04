//
//  1546.c
//  5.Array
//
//  Created by on 2022/02/04.
//

#include <stdio.h>

int main(void) {
    float sum = 0;
    int n, m = 0;
    
    
    scanf("%d", &n);
    
    int points[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &points[i]);
        if (m < points[i])
            m = points[i];
    }
    
    for(int i = 0; i < n; i++)
        sum += (float)points[i] / m * 100;
    
    printf("%f\n",  sum / n);
}
