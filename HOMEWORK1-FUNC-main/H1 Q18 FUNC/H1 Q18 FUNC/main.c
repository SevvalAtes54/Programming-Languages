//
//  main.c
//  H1 Q18 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
int decimatToBinary(int a);
int main(int argc, const char * argv[]) {
    // .Design an algorithm to convert a decimal number, n, to binary format?
    int decimal;
    printf("Bir sayş giriniz");
    scanf("%d",&decimal);
    int sonuc = decimatToBinary(decimal);
    printf("%d",sonuc);
    return 0;
}
int decimatToBinary(int a){
    
    int binary,kalan=0;
    int decimali = a;
    int sayi =0,reversed = 0;
    
    
    while (a>0) {
        
        kalan = a%2;
        sayi = (sayi*10)+kalan;
        a = a/2;
        
    }
    kalan = 0;
    while (sayi>0) {
        kalan = sayi %10;
        reversed = (reversed*10)+kalan;
        sayi = sayi/10;
    }
    
    return reversed;
}
