//
//  main.c
//  ORT GEO HAR AR
//
//  Created by my computer on 12.01.2023.
//

#include <stdio.h>
#include <math.h>
double ort_hesapla(int dizi[],int eleman_sayisi,int yontem);
int main(int argc, const char * argv[]) {
    int sayi;
    int yontem;
    printf("size gir");
    scanf("%d",&sayi);
    int dizi[sayi];
    for(int i =0;i<sayi;i++){
        scanf("%d",&dizi[i]);
    }
    printf("yontem gir 1 aritmetik 2 goe 3 harmo");
    scanf("%d",&yontem);
    int d = ort_hesapla(dizi, sayi, yontem);
    printf("%d",d);
   
    return 0;
}
double ort_hesapla(int dizi[],int eleman_sayisi,int yontem){
    double aritmetik=0,harmonik,geometrik=1,top=0;
    if(yontem==1){
        for (int i=0;i<eleman_sayisi;i++){
            
            aritmetik+=dizi[i];
            
        }
        aritmetik = aritmetik/eleman_sayisi;
        return aritmetik;
        
    }else if(yontem==2){
        for (int i=0;i<eleman_sayisi;i++){
            
            geometrik*=dizi[i];
        }
        
        pow(geometrik, 1/(double)eleman_sayisi);
        return geometrik;
    }
    
    else if(yontem==3){
        for (int i=0;i<eleman_sayisi;i++){
            top+=1/dizi[i];
        }
        double donus = eleman_sayisi/top;
        return donus;
    }
    
    
    else{
        
        
        printf(" hatali girdiniz");
        return 0;
    }
    
    
    
    
    
}
