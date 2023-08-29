//
//  main.c
//  en buyuk sayi
//
//  Created by my computer on 10.01.2023.
//

#include <stdio.h>
int enBuyukSayi(int dizi[]);
int main(int argc, const char * argv[]) {
    // dizideki en buyuk sayi;
    int sayilar[5];
    for (int a =0;a<5;a++){
        scanf("%d",&sayilar[a]);
        
    }
    
    int d = enBuyukSayi(sayilar);
    printf("%d",d);
    return 0;
}
int enBuyukSayi(int dizi[]){
    int enbuyuk = dizi[0];
    for(int i =1;i<5;i++){
        if(dizi[i]>enbuyuk){
            
            enbuyuk = dizi[i];
            
        }
        
        
    }
    
    return enbuyuk;
    
}
