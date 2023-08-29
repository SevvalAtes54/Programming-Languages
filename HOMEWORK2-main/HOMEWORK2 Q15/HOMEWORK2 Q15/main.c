//
//  main.c
//  HOMEWORK2 Q15
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // a flow chart to check Whether a Number is Palindrome or Not
    int sayi,reversed=0;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    int deger = sayi;
    int kalan =0;
    while(sayi>0){
        kalan =sayi%10;
        reversed =(reversed*10)+kalan;
        
        sayi=sayi/10;
        
    }
    if(deger ==reversed){
        
        printf("Bir polindrome sayidir");
        
    }
    else{
        
        printf("Bir polşndrom sayi degildirrrrr");
    }
    return 0;
}
