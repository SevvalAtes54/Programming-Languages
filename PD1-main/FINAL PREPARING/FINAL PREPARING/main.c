//
//  main.c
//  FINAL PREPARING
//
//  Created by my computer on 10.01.2023.
//

#include <stdio.h>
#include<stdlib.h>
int main(int argc, const char * argv[]) {
    //girilen bir xümlede kaç tane a ile biten kelime oldugını bul
    char cumle[50];
   gets(cumle);
    int sayac=0;
  
     for(int i =0;i<50;i++){
      if(cumle[i] == ' ' ){
            
            
            if(cumle[i-1] == 'a'){
                sayac++;
                printf("%c",cumle[i-2]);
            }
          if(cumle[i]== '\0'){
              printf("%c",cumle[i-1]);
              if(cumle[i-1]=='a'){
                  sayac++;
              }
              
          }
        }
   }
    printf("%d",sayac);
   
    return 0;
}
