//
//  main.c
//  HOMEWORK1 Q18
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Design an algorithm to convert a decimal number, n, to binary format.
    int sayi,kalan,asilsayi=0,reversedyeni =0,kalan2;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    
    while(sayi>0){
        kalan= sayi%2;
        sayi = sayi/2;
        
        asilsayi=(asilsayi * 10) + kalan;
        
        
    }
    while(asilsayi>0){
        
        kalan2 = asilsayi %10;
        asilsayi/=10;
        reversedyeni = (reversedyeni * 10 )  +kalan2;
        
        
    }
    
    printf("%d",reversedyeni);
    
    return 0;
}
