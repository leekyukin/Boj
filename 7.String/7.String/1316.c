//
//  1316.c
//  7.String
//
//  Created by 이규진 on 2022/02/07.
//

#include <stdio.h>



int main(void) {
    int n;
    scanf("%d", &n);
    int cnt = n;
    for(int i = 0; i < n; i++) {
        char str[100];
        scanf("%s", str);
        int alpha[26] = {0};

        for(int j = 0; str[j] != '\0'; j++) {
            if (str[j] != str[j + 1])
                alpha[str[j] - 97]++;
        }
        
        for(int j = 0; j < 26; j++) {
            if (alpha[j] > 1) {
                cnt--;
                break;
            }
        }
    }
    printf("%d", cnt);
}
