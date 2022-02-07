//
//  2675.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        int num;
        char s[100];
        scanf("%d %s", &num, s);
        
        for(int j = 0; s[j] != '\0'; j++) {
            for(int k = 0; k < num; k++)
                printf("%c", s[j]);
        }
        printf("\n");
    }
    
}
