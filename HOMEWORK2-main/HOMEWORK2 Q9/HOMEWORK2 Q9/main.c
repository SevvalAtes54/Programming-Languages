//
//  main.c
//  HOMEWORK2 Q9
//
//  Created by my computer on 11.12.2022.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    // Draw a flow chart to check whether a number is Armstrong number or not.
    int sayi,deger,kalan,bassayisi=0,toplam=1,asiltoplam = 0;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    deger = sayi;
    while(sayi>0){
      
        bassayisi+=1;
       sayi= sayi/10;
        
    }
    sayi = deger;
    
    while (sayi>0) {
        toplam =1;
        kalan = sayi%10;
        for (int i = 0 ; i<bassayisi;i++){
        
            toplam*= kalan;
        }
        asiltoplam += toplam;
        sayi/=10;
       
        
    }
    
    if (deger == asiltoplam){
        printf("%d bir armstrong sayisidir",deger);
    }
    else{
        printf("%d bir armstrong sayisi deidir",deger);
    }
    return 0;
}
