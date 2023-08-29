//
//  main.c
//  HOMEWORK2 Q10
//
//  Created by my computer on 11.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to print all Armstrong numbers between 1 to n.
    int sayi,deger,kalan,bassayisi=0,toplam=1,asiltoplam = 0;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    for (int a = 1 ;a<=sayi;a++){
        deger = a;
        while(a>0){
            
            bassayisi+=1;
            a= a/10;
            
        }
        a = deger;
        
        while (a>0) {
            toplam =1;
            kalan = a%10;
            for (int i = 0 ; i<bassayisi;i++){
                
                toplam*= kalan;
            }
            asiltoplam += toplam;
            a/=10;
            
            
        }
        
        if (deger == asiltoplam){
            printf("%d bir armstrong sayisidir",deger);
        }
        
    }
    return 0;
}
