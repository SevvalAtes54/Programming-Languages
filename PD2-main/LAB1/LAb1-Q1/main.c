//
//  main.c
//  LAb1-Q1
//
//  Created by my computer on 2.03.2023.
//


//Klavyeden öğrenci sayısı (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanımlanacak “hesapla” fonksiyonuna gönderen bir “main” fonksiyonu hazırlayınız. “hesapla” fonksiyonu kendisine gelen öğrenci sayısı kadar notu klavyeden okuyarak 100 elemanlı bir diziye kaydetmeli ve geçme notuna göre kaç tane öğrencinin dersten kaldığını bularak fonksiyondan geri döndürürken, sınıf ortalamasını da ekrana yazdırmalıdır. Buna göre aşağıda verilen alanlara “main” ve “hesapla”
//fonksiyonlarını yazınız.
#include <stdio.h>
#include <stdlib.h>
int hesapla(int dizi[],int gecmeNotu);

int main(int argc, const char * argv[]) {
    int kalanSayi ;
    int gecmeNotu = 60;
    int dizi[5];
   
    for(int i =0;i<5;i++){
        scanf("%d",&dizi[i]);
    }
   
    kalanSayi = hesapla(dizi,gecmeNotu);
    printf("kalan kisi %d tanedir\n",kalanSayi);
    for(int a =0;a<5;a++){
       
    }
   
   
    return 0;
}
int hesapla(int dizi[],int gecmeNotu){
    int top =0;
    int ort =0;
    int kalanlar=0;
    for(int i = 0;i<5;i++){
        if(dizi[i]<gecmeNotu){
            kalanlar++;
            
        }
        
        top += dizi[i];
    }
    ort = top/5;
    printf("sınıf ortalaması : %d \n",top);
    
    return kalanlar;
}

