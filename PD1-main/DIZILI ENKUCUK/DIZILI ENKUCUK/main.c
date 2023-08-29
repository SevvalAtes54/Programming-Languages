//
//  main.c
//  DIZILI ENKUCUK
//
//  Created by my computer on 9.01.2023.
//

#include <stdio.h>
int sayiKontrol(int dizi[10]);
int main(int argc, const char * argv[]) {
    //DİZİLİ OLMAZ KANKİLER BOŞUNA BAKMAYIN POİNTER ÖĞRENMEDEN OLMAZ :) AMA SİZE BAŞKA SORU YAPİM :
    
    int A[10]={233,45,777,81,999999,36,90,88,11,61 };
    int d = sayiKontrol(A);
    printf("%d",d);
    
    return 0;
}


int sayiKontrol(dizi[10]){
    
    int a =0,kalan,kalan2;
    for(int i =0;i<10;i++){
        kalan =dizi[i];
        dizi[i]/=10;
        while(dizi[i]>0){
            kalan2 =dizi[i]%10;
            if(kalan2!=kalan){
                a++;
            }
            dizi[i]/= 10;
            
        }
    }
    
    if(a==0){
        printf("tum basamakları eşit");
        return 1;
    }
    else{
        printf("tum bas eşit değildir");
        return 0;
    }
}
