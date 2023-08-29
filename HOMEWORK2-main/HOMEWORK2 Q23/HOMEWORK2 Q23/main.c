//
//  main.c
//  HOMEWORK2 Q23
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to convert a decimal number into binary without using an array.
   
    int decimal=25;
    int reversed=0;
    int sayi=0;
    int degisken = decimal;
    int kalan;
    while(decimal>0){
        if(decimal%2 ==1){
            sayi= sayi*10 +1;
        }
        else{
            sayi= sayi*10 +0;
            
        }
        
        decimal/=2;
        
    }
    while (sayi>0) {
        kalan =sayi%10;
        
        reversed = (reversed*10)+kalan;
        sayi/=10;
        
    }
    printf("%d",reversed);

    
    
    
    
    return 0;
}
