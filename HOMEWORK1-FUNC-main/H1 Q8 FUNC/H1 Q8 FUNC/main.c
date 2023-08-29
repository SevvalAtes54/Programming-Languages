//
//  main.c
//  H1 Q8 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
int sum_All(int kucuk,int buyuk);
int main(int argc, const char * argv[]) {
    // Write an algorithm and draw a flowchart to print the SUM of numbers from LOW to HIGH. Test with LOW=3 and HIGH=9.
    int   sayi1,sayi2;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi1);
    printf("Bir sayi giriniz");
    scanf("%d",&sayi2);
    int sonuc = sum_All(sayi1,sayi2);
    printf("%d",sonuc);
    return 0;
}
int sum_All(int kucuk,int buyuk){
    int gecici,sum=0;
    if(kucuk>buyuk){
        gecici = kucuk;
        kucuk = buyuk;
        buyuk = gecici;
    }
    
    for(kucuk;kucuk<=buyuk;kucuk++){
        sum += kucuk;
    }
    return sum;
}
