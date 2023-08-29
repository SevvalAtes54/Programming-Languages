//
//  main.c
//  H1 Q9 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
void print(int kucuk,int buyuk);
int main(int argc, const char * argv[]) {
    // Write an algorithm and draw a flowchart to print all numbers between LOW and HIGH that are divisible by NUMBER
    int sayi1,sayi2;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi1);
    printf("Bir sayi giriniz");
    scanf("%d",&sayi2);
    print(sayi1,sayi2);
    return 0;
}
void print(int kucuk,int buyuk){
    int gecici;
    if(kucuk>buyuk){
        gecici = kucuk;
        kucuk= buyuk;
        buyuk = gecici;
        
    }
    for (kucuk; kucuk<=buyuk; kucuk++) {
        printf("%d ",kucuk);
    }
    
}
