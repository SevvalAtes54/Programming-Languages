//
//  main.c
//  LAB13 Q2
//
//  Created by my computer on 3.01.2023.
//

#include <stdio.h>

int ort_hesapla(int a,int b,int c,int d,int e);
int main(int argc, const char * argv[]) {
    // Fonksiyona gönderilen beş sayının ortalamasını hesaplayıp geri döndüren programı yazınız.
  
    
    int x = ort_hesapla(2, 4, 8, 9, 7);
    printf("%d",x);
    return 0;
}

int ort_hesapla(int a,int b,int c,int d,int e){
    int top,ort;
    top = a+b+c+d+e;
    ort = top/5;
    return ort;
    
}
