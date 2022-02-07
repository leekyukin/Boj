//
//  2941.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    int cnt = 0;
    char str[100];
    scanf("%s", str);
        
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'c') {
            if(str[i + 1] == '=' ||
               str[i + 1] == '-')
                i++;
            cnt++;
        }
        else if(str[i] == 'd') {
            if(str[i + 1] == 'z' &&
               str[i + 2] == '=')
                i+=2;
            else if (str[i + 1] == '-')
                i++;
            cnt++;
        }
        else if(str[i] == 'l' &&
           str[i + 1] == 'j') {
            i++;
            cnt++;
        }
        else if(str[i] == 'n' &&
           str[i + 1] == 'j') {
            i++;
            cnt++;
        }
        else if(str[i] == 's' &&
           str[i + 1] == '=') {
            i++;
            cnt++;
        }
        else if(str[i] == 'z' &&
                str[i + 1] == '=') {
            i++;
            cnt++;
        }
        else
            cnt++;
    }
    printf("%d", cnt);
}
