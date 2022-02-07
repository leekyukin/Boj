//
//  5622.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>

int main(void) {
    
    char str[16];
    scanf("%s", str);
    
    int time[26] = {
        3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,
        10,10,10,10
    };
    
    int cnt = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        cnt += time[str[i] - 65];
    }
    printf("%d", cnt);
}
