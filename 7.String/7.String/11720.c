//
//  11720.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char nums[n];
    scanf("%s", nums);

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += nums[i] - 48;
    }

    printf("%d", sum);
    

}
