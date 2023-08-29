//
//  main.c
//  HOMEWORK1 Q21
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to find first and last digit of a number.
    int sayi , ilkrakam,sonrakam,top=1;
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
    
    printf(" son rakam :%d ilk rakam : %d",sonrakam,ilkrakam);
    return 0;
}
