//
//  main.c
//  Lab1-Q2
//
//  Created by my computer on 2.03.2023.
//Boy ve kilo bilgisini alarak vücut kitle indeksini hesaplayan kitleIndeks isimli bir fonksiyon yazınız. Bu
//fonksiyon aşağıda verilen tabloya göre değer döndürmektedir. Yazdığınız fonksiyonu main
//fonksiyonunda çağırarak kullanın ve bir program yazınız. Programın örnek çalışması şekilde verildiği
//gibi olmalıdır. Vücut kitle indeksi hesabı aşağıda verilmiştir.

#include <stdio.h>
#include <stdlib.h>
int hesapla(float boy,float kilo);
int main(int argc, const char * argv[]) {
    float boy,kilo;
    float sayi ;
    printf("Boyunuzu giriniz");
    scanf("%f",&boy);
    printf("Kilonuzu giriniz");
    scanf("%f",&kilo);
    sayi = hesapla(boy,kilo);
    
    if(sayi ==1 ){
        printf("ZAYIFSIN");
    }
    if(sayi ==2 ){
        printf("NORMALSİN");
    }
    if(sayi ==3 ){
        printf("KİLOLUSUN");
    }
    if(sayi ==4 ){
        printf("OBEZSİN KNK");
    }
   
    
    return 0;
}
int hesapla(float boy,float kilo){
    float deger ;
    int sayi;
    deger = kilo/(boy*boy);
    printf("vucut kitle indeksiniz %f şeklinde hesplanmıştır\n",deger);
    printf("Buna göre:\n");
    
    
    
    if(deger<=18){
      
        return 1;
    }
    else if (deger<=25){
        
        return 2;
    }
    else if (deger<30){
        return 3;
    }
    else{
        return 4;
    }
    
}
