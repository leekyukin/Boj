//
//  1157.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>

int count[26], cnt, res, max;

int main() {
    char str[1000000];
    scanf("%s", str);
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] - 97 >= 0
           && str[i] - 97 <= 25)
            count[str[i] - 97]++;
        else
            count[str[i] - 65]++;
    }
    for(int i = 0; i < 26; i++) {
        if (max < count[i])
            max = count[i];
    }
    for(int i = 0; i < 26; i++) {
        if (max == count[i]) {
            res = i + 65;
            cnt++;
        }
    }
    
    if (cnt > 1) res = '?';
    
    printf("%c", res);
    
    return 0;
}
