//
//  main.c
//  Lab2-Q1
//
//  Created by my computer on 9.03.2023.
//

#include <stdio.h>
int toplamRekursif(int sayi);
int main(int argc, const char * argv[]) {
    int sayi;
    printf("bir sayi giriniz");
    scanf("%d",&sayi);
    int sonuc = toplamRekursif(sayi);
    printf("%d",sonuc);
    return 0;
}
int toplamRekursif(int sayi){
    if(sayi<=0){
        
        return -1;
    }
    
    
    return sayi + toplamRekursif(sayi-1);
    
    
}
