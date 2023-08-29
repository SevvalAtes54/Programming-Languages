//
//  main.c
//  ODEV-Q4
//
//  Created by my computer on 28.03.2023.
//

#include <stdio.h>
int func(int sayi1,int sayi2);
int main(int argc, const char * argv[]) {
    //Bir sayının istenen kuvvetini rekürsif fonksiyon ile bulan C programını yazınız.
    int sayi1,sayi2;
    printf("Bir sayi gir");
    scanf("%d",&sayi1);
    printf("Bir sayi gir");
    scanf("%d",&sayi2);
    int sonuc = func(sayi1, sayi2);
    printf("%d",sonuc);
    
    return 0;
}
int func(int sayi1,int sayi2){
    if(sayi2==0){
        return 1;
    }
    return sayi1*func(sayi1, sayi2-1);
}
