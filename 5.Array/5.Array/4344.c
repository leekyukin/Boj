//
//  4344.c
//  5.Array
//
//  Created by 이규진 on 2022/02/05.
//

#include <stdio.h>

int main(void) {
    
    int C;
    scanf("%d", &C);
        
    int N[C];
    
    
    for(int i = 0; i < C; i++) {
        float sum = 0, avg = 0,cnt = 0;;
        scanf("%d", &N[i]);
        int score[N[i]];
        
        for(int j = 0; j < N[i]; j++) {
            scanf("%d", score + j);
            sum += score[j];
        }
        
        avg = sum / N[i];
        
        for(int t = 0; t < N[i]; t++) {
            if (score[t] > avg)
                cnt++;
        }
        double ratio = cnt / N[i] * 100;

        printf("%.3f% \n", ratio);
        
    }
    
    
}
