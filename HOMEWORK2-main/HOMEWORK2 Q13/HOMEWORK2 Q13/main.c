//
//  main.c
//  HOMEWORK2 Q13
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //  flow chart to check whether a number is Strong number or not.
    int sayi,kalan,top=0;
    printf("Bir sayi giriniz\n");
    scanf("%d",&sayi);
    int deger= sayi;
    while (sayi>0) {
        kalan=sayi%10;
        int fact=1;
        for (int a =1; a<=kalan; a++) {
            fact*=a;
        }
        top+=fact;
        sayi=sayi/10;
    }
    if(deger==top){
        printf("%d bir armstrong sayisidir",deger);
    }
    return 0;
}
