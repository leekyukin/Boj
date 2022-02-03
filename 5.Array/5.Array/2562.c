//
//  2562.c
//  5.Array
//
//  Created by 이규진 on 2022/02/03.
//

#include <stdio.h>

int main(void) {
    int arr[9], position = 0, max = -1000001;;
    
    for(int i = 0; i < 9; i++) {
        scanf("%d", arr + i);
        if (max < arr[i]) {
            max = arr[i];
            position = i;
        }
    }
    
    printf("%d\n%d",max, position + 1);
}
