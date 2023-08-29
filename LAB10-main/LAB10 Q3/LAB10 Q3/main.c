//
//  main.c
//  LAB10 Q3
//
//  Created by my computer on 20.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Maksimum 5 basamaklı sayının basamaklarındaki rakamları diziye atan ve ekrana basan programı yazınız.
    int dizi[5];
    int sayi;
    int kalan;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
  
        for (int i = 0 ; i<5;i++){
            
            kalan =  sayi%10;
            dizi[i]=kalan;
            sayi=sayi/10;
            printf("%d,",dizi[i]);
            
        }
    
    return 0;
}
