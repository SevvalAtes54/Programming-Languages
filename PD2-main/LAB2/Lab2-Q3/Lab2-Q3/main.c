//
//  main.c
//  Lab2-Q3
//
//  Created by my computer on 9.03.2023.
//

#include <stdio.h>
int toplam(int sum);

int main(int argc, const char * argv[]) {
    // Main fonksiyonu içerisinde verilen sayının basamaklarını toplamını rekürsif bir fonksiyon kullanarak bulunuz.
    int sayi;
  printf("Bir sayi giriniz");
    scanf("%d",&sayi);
 int sonuc =   toplam(sayi);
    printf("%d",sonuc);
    
    
    
    return 0;
}
int toplam(int sayi){
   
    if(sayi>0){
      
        return sayi%10 + toplam(sayi/10) ;
    }
    
    return 0;
    
    
}
