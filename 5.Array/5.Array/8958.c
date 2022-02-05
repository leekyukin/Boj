//
//  8958.c
//  5.Array
//
//  Created by 이규진 on 2022/02/04.
//

#include <stdio.h>

int main(void) {
    
    int N;
    scanf("%d", &N);
    
    char ans[100];
    for(int i = 0; i < N; i++) {
        scanf("%s", ans);
    
        int n = 0;
        int cnt = 0;
        for(int j = 0; ans[j] != '\0'; j++) {
            if(ans[j] == 'O')
                n++;
            else if (ans[j] == 'X')
                n = 0;
            cnt += n;
        }
        printf("%d\n", cnt);
        
    }
    

}
