//
//  main.c
//  LAB12 Q2
//
//  Created by my computer on 27.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Write C Program to Remove all Characters in a String Except Alphabet
    
    char str[50] = "pr-o@gram84iz";
    for(int i =0;i<50;i++){
        if(str[i]>=97 && str[i]<=122){
            
            
            printf("%c",str[i]);
            
            
            
        }
    }
    
    
    return 0;
}
