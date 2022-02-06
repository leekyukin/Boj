//
//  10809.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>

char table[26];

int main(void) {
    char s[100];
    scanf("%s", s);
    
    for(char c = 'a'; c <= 'z'; c++) {
        for(int i = 1; s[i] != '\0'; i++) {
            if (table[c - 97] != 0)
                continue;
            if(s[i] == c)
                table[c - 97] = i;
        }
        if (table[c - 97] == 0)
            table[c - 97] = -1;
    }
    
    table[s[0] - 97] = 0;
    
    for(int i = 0; i < 26; i++)
        printf("%d ", table[i]);
}

