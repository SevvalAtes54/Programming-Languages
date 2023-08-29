//
//  main.c
//  HOMEWORK1 Q17
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // .Design an algorithm with a natural number, n, as its input which calculates the following formula and writes the result in the standard output: S = 1⁄2 + 1⁄4 + ... +1/n.
    
    int sayi,toplam = 0;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    
    if(sayi%2!=0){
        sayi = sayi-1;
    }
    for (int i =2 ;i<=sayi; i+=2){
        
        toplam += 1/i;
        
       
    }
    printf("%d",toplam);
    
    return 0;
}
