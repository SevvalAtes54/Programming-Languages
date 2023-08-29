//
//  main.c
//  LAB12 Q3
//
//  Created by my computer on 27.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Write C Program to Count the Number of Vowels, Consonants and so on
    // adfslkj34 34lkj343 34lk
    /*Vowels: 1
     Consonants: 11
     Digits: 9
     White spaces: 2      */
    
    char str[50];
    gets(str);
    int vow= 0;
    int cons= 0;
    int dig= 0;
    int space= 0;
    int kucukharf = 0;
 
    for(int i = 0 ;i<50 ;i++){
        
        if(str[i]<=97 && str[i]>=122){
            
            kucukharf++;
        }
        
        if(str[i]==97){
            vow++;
            
        }
        else{
            cons++;
        }
        if(str[i]<=48 && str[i]>=57){
            
            dig++;
            
        }
        if(str[i]==32){
            
            space++;
        }
        
        
    }
    
    
    return 0;
}
