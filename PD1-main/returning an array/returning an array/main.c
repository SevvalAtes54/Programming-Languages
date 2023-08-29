//
//  main.c
//  returning an array
//
//  Created by my computer on 9.01.2023.
//
#include <stdio.h>
#include <stdlib.h>
int main() {
  
  char kelime[15];
  char yenidizi[20];
  
  gets(kelime);
    int a =0;
  for(int i =0;i<20;i+=2){
      
      yenidizi[i] = kelime[a];
      yenidizi[i+1] = kelime[a];
     
      a++;
      
  }
  puts(yenidizi);
  
  return 0;
  
}
