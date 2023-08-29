//
//  main.c
//  HOMEWORK2 Q18
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // ia flow chart to print the Floyd's Triangle.
/*  1
    01
    101
    0101
    10101 */
   
    int a = 20;
    int j=1;
    for (int i =1;i<=a;i++){
        if (i%2== 1){
            for(j=1;j<=i;j++){
                
                if(j%2==0){
                    
                    printf("0");
                }
                else{
                    
                    printf("1");
                    
                }
            }
        }
        
        else {
            for(j=0;j<i;j++){
                
                if(j%2==0){
                    
                    printf("0");
                }
                else{
                    
                    printf("1");
                    
                }
            }
        }
        
        
        printf("\n");
      
        
        
        
        
        
    }
    
    return 0;
}
