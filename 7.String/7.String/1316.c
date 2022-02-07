//
//  1316.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>

int main(void) {
    int n, alpha[26];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        char str[100], tmp[100] = {};
        scanf("%s", str);
        
       // int k = 0;
        for(int j = 0; str[j] != '\0'; j++) {
            if (str[j] != str[j + 1])
                //tmp[k++] = str[j];
                alpha[str[j] - 97]++;
        }
        
        for(int i = 0; i < 26; i++) {
            if(alpha[i] > 1) n--;
        }
        
        if (n < 0) n = 0;
        
        printf("%d", n);
    }
}
