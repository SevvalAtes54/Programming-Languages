//
//  main.c
//  HOMEWORK2 Q8
//
//  Created by my computer on 11.12.2022.
//

    
#include <stdio.h>

    int main(int argc, const char * argv[]) {
        // Draw a flow chart to print all Prime numbers between 1 to n.
        int a;
        int sum =2;
        printf("2\n");
        for (int i= 3;i <=10 ;i++){
            a=0;
            
            for (int j = 2 ;j<i;j++){
                
                if(i%j == 0){
                    a=1;
                    
                }
                
            }
            if(a== 0){
                printf("%d\n",i);
                sum+= i;
            }
        }
    
        printf("%d",sum);
        return 0;
    
}



