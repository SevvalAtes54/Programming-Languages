//
//  main.c
//  LAB12 Q4
//
//  Created by my computer on 27.12.2022.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
   
    char str1[5][10];
 //   char str2[2][10];
    for(int i = 0 ; i<5; i++){
           scanf("%s",&str1[i]);
    
    }
    for(int i = 0 ; i<2; i++){
         // printf("%s",str1[i]);
    
    }
    
    //65-90 arasi buyuk harfler
    int a = 5;
    int degisken;
    for(a;a>=0;a++){
        
        for(int i=0 ; i<5; i++){
            int a =0;
            int k = 5;
            for(int j = i+1 ; j <5;j ++){
                
                if(str1[i][0]<str1[j][0]){
                    
                    
                }
                else{
                    a++;
                }
                
            }
            if(a==0){
                printf("%s\n",str1[i]);
            }
            else{
                degisken = str1[i];
                str1[k] = degisken;
                printf("%s\n",str1[k]);
            }
            k--;
        }
        
       
        
    }
    
    return 0;
}
