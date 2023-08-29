//
//  main.c
//  LAB10 Q4
//
//  Created by my computer on 20.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 10 elemanlı diziyi klavyeden alan ve tersten ekrana yazan programı yazınız.(1,5,2,4,5,6,78,12,1,3 => 3,1,12,78,6,5,4,2,5,1)
    int dizi[10];
    int degisken = 9;
    
 /*   for (int i =9; i>=0; i--) {
        printf("Bir sayi giriniz: ");
        scanf("%d",&dizi[i]);
        printf("%d\n",dizi[i]);
    }
    for (int i =0; i<10; i++) {
        
        printf("%d,",dizi[i]);
    } */
    
    for (int i =0; i<10; i++) {
        printf("Bir sayi giriniz: ");
        scanf("%d",&dizi[i]);
       
        
        
    }
    printf("Mevcut dizi : ");
    for (int i =0; i<10; i++) {
       
        printf("%d,",dizi[i]);
    }
    for(int a = 0; a < 10;a++){
        dizi[a] = dizi[degisken];
        
        
        degisken--;
        
        
    }
    printf("Yeni dizi : ");
    for (int i =0; i<10; i++) {
       
        printf("%d,",dizi[i]);
        
    }
    
    return 0;
}
