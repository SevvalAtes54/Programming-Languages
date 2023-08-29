//
//  main.c
//  LAB10 Q1
//
//  Created by my computer on 20.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // 8 elemanlı float diziye klavyeden değer girin. Girilen değerlerin ortalamasını hesaplayıp ekrana yazdırın.
    float ort ;
    float top = 0.0;
    float dizi[8];
    for (int i =0; i<8; i++) {
        printf("Dizinin %d. elemanini girin",i+1);
        scanf("%f",&dizi[i]);
        top += dizi[i];
    }
    ort = top/8;
    printf("%f",ort);
    
    return 0;
}
