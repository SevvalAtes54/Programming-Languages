//
//  main.c
//  HOMEWORK1 Q24
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to find frequency of each digit in a given integer.
    
    int sayi =122334;
    int kalan =0;
    int yenisayi= sayi;
    
    int top = 0;
    while (sayi>0) {
        top+=1;
        sayi=sayi/10;
        
    }
    for(int a =0;a<10;a++){
         int deger = 0;
        sayi =yenisayi;
        while(sayi>0){
            kalan=  sayi%10;
            if(kalan == a){
                
                deger+=1;
            }
            sayi/=10;
            
            
        }
        printf("%d degerinden %d tane vardir.",a,deger );
    }
    
    
    
    
    
    
    return 0;
}
