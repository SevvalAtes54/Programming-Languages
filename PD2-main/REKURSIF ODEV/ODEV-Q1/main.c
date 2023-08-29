//
//  main.c
//  ODEV-Q1
//
//  Created by my computer on 28.03.2023.
//

#include <stdio.h>
int func(int sayi,int yazdir);
int main(int argc, const char * argv[]) {
    // insert code here...
    int sayi,yazdir=1;
    printf("bir sayi giriniz");
    scanf("%d",&sayi);
    func(sayi,yazdir);
    return 0;
}
int func(int sayi,int yazdir){
    static int sayac=1;
    static int degisken = 3;
    static int denem = 3;
    if(degisken==0){
        denem+=2;
        degisken=denem;
    }
    if((sayi)==sayac){
        return 0;
    }
   
    for(int a=1;a<=yazdir;a++){
        printf("*");
    }
    degisken--;
    
    printf("\n");
    if(degisken==0){
        denem+=2;
        degisken=denem;
        return func(sayi,1);
    }
   
    sayac++;
    return func(sayi,yazdir+2);
    
    
}
