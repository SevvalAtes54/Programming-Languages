//
//  main.c
//  Lab2-Q4
//
//  Created by my computer on 9.03.2023.
//

#include <stdio.h>
int Ebob(int sayi1,int sayi2);
int main(int argc, const char * argv[]) {
 
   // Main fonksiyonu içerisinde verilen iki pozitif sayıyı kullanarak bu sayıların en büyük ortak bölenini rekürsif bir fonksiyon kullanarak bulunuz.
    int sayi1,sayi2,degisken;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi1);
    printf("Bir sayi giriniz");
    scanf("%d",&sayi2);
    if(sayi2>sayi1){
        degisken = sayi1;
    sayi1 = sayi2;
        sayi2 = degisken;
    
    }
    int buyuk,kucuk;
    buyuk = sayi1;
    kucuk = sayi2;
    
       
   int sonuc =  Ebob(buyuk,kucuk);
    printf("%d",sonuc);
    return 0;
}
int Ebob(int buyuk,int kucuk){
    int obeb;
    static int deneme = 1;
    if(deneme>kucuk){
        
        return obeb;
    }
    if(buyuk%kucuk == 0){
        obeb = buyuk/kucuk;
        return Ebob(buyuk, kucuk-1);
        
        
    }
    
   
    return Ebob(buyuk, kucuk-1);
    
}
