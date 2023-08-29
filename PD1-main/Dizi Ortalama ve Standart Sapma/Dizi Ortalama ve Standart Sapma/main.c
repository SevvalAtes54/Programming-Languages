//
//  main.c
//  Dizi Ortalama ve Standart Sapma
//
//  Created by my computer on 10.01.2023.
//

#include <stdio.h>
#include <math.h>
int OrtalamaHesaplama(int dizi[]);
float standartSapma(int dizi2[ ],int a);
int main(int argc, const char * argv[]) {
  
    int ogrencinotlari[7];
    for(int i =0;i<7;i++){
        
        scanf("%d",&ogrencinotlari[i]);
    }
  int ort =  OrtalamaHesaplama(ogrencinotlari);
    float sapma =  standartSapma(ogrencinotlari,ort);
    printf("%f",sapma);
    return 0;
}
int OrtalamaHesaplama(int dizi[]){
    
    int total=0;
    for(int i=0;i<7;i++){
        total+= dizi[i];
        
    }
    total = total/7;
    return total;
    
    
}
float standartSapma(int dizi2[],int a){
    int sum=0;
    for(int i=0;i<7;i++){
        sum += dizi2[i] - a;
    }
    sum= sum/(a-1);
 float k=    sqrt((float)sum);
    return k;
}
