//
//  main.c
//  HOMEWORK1 Q22
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //
    int sayi , ilkrakam,sonrakam,top=1,yenisayi;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    int degisken = sayi;
    while(sayi>0){
        top*=10;
        sayi/=10;
        
    }
    top = top/10;
    sonrakam = degisken %10;
    ilkrakam = degisken / top;
    
    yenisayi = (degisken - (ilkrakam*top) + (sonrakam * top) ) + (degisken-sonrakam+ilkrakam);
    
    printf("%d",yenisayi);
    return 0;
}
