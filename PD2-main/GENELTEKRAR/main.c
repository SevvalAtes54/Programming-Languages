//
//  main.c
//  GENELTEKRAR
//
//  Created by my computer on 8.04.2023.
//

#include <stdio.h>
#include <time.h>
int func(int sayi,int deneme);
int main(int argc, const char * argv[]) {
    int sayi=6;
    
    
  int sonuc =  func(sayi,sayi-1);
    if(sonuc==1){
        printf("asaldır");
    }
    else{
        printf("asal değşl knk");
    }
  
    
    return 0;
}
int func(int sayi,int deneme){
    static int sayac = 0;
    
    if(deneme==2){
        if(sayac==0){
            return 1;
        }
        else{
            return 0;
        }
        
    }
    if(sayi%deneme==0){
        sayac+=1;
    }
    
   
    return func(sayi,deneme-1);
    
    
}
