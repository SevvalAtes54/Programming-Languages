//
//  main.c
//  Lab2-Q2
//
//  Created by my computer on 9.03.2023.
//

#include <stdio.h>
int sayi =5;
int enBuyuk(int dizi [5]);
int main(int argc, const char * argv[]) {
    // Girilen dizideki en büyük elemanı bulan programı C dilinde Rekürsif olarak yazınız.
  
    int dizi [5] ;
    for(int i = 0;i<5;i++){
        printf("dizi %d. elemanı giriniz",i+1);
        scanf("%d",&dizi[i]);
        
    }
   int sonuc = enBuyuk(dizi);
    printf("%d",sonuc);
    
    return 0;
}

int enBuyuk(int dizi [5]){
    
    int max;
    if (dizi[sayi-1]>max){
        
        max =   dizi[sayi+1];
        return enBuyuk(dizi-1);
        
    }
    else{
        return max;
    }
    
    
    
    
    
}

