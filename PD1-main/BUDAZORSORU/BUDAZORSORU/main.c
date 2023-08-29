//
//  main.c
//  BUDAZORSORU
//
//  Created by my computer on 9.01.2023.
//

    #include <stdio.h>
#include<stdlib.h>
    int main() {
       // melisadan sonra ahmeti ekle
      char isimler[100] ;
      char aranacak[] = "melisa";
        char yazilacak[] = "ahmet";
      gets(isimler);
      int a =0;
      for(int i=0;i<500;i++){
        int k=0;
          for(k ;k<6;k++){
              if(aranacak[k]==isimler[i+k]){
                  a++;
              }
              else{
                  a=0;
              }
              
              if(a==6){
                  /*   int degis;
                  for(int x =i;x<100;x++){
                   degis = isimler[i];
                   isimler[i]=isimler[i+6];
                   isimler[i+6 ]= degis;
                      */
                  for (int j =0;j<6;j++){
                      
                      isimler[k+6+j]= yazilacak[j];
                      
                      
                      
                      
                  }
                  puts(isimler);
                  
                  
                  
              }
             
          }
          
          
          
      }
      
        return 0;
    }
  
