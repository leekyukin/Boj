//
//  1152.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>

int main(void) {
    char str[1000000];
    scanf("%[^\n]s", str);
    int cnt = 1;
    
    int i;
    
    for(i = 1; str[i] != '\0'; i++) {
        if (str[i + 1] == '\0' && str[i] == ' ')
            continue;
        else if (str[i] == ' ')
            cnt++;
    }
    
    if (str[0] == ' ' && str[1] == '\0') {
        printf("%d", 0);
        return 0;
    }
    
    
    
    printf("%d", cnt);
}
