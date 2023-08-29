//
//  main.c
//  LAB12 Q1
//
//  Created by my computer on 27.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Write C Program to Concatenate Two Strings.
    
    char str1[9] = "Ahmet";
    char str2[] = "Ali";
    int j = 0;
   
    for(int i = 5 ;i<8;i++){
         
        str1[i]= str2[j];
        j++;
    }
    
    
   
        
        printf("%s",str1);
        
    
    return 0;
}
