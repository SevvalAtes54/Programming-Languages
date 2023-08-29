//
//  main.c
//  ODEV-Q2
//
//  Created by my computer on 28.03.2023.
//

#include <stdio.h>
int func(int sayi,int sayi2);
int main(int argc, const char * argv[]) {
    //Klavyeden girilen iki tamsayının bölme operandı (/) kullanmadan, birbirlerine bölümü ile elde edilecek olan sonucu (bölüm), rekürsif fonksiyon kullanarak bulduran C kodunu yazınız.

    int sayi1,sayi2;
    printf("bir sayi girin");
    scanf("%d",&sayi1);
    printf("bir sayi girin");
    scanf("%d",&sayi2);
   int k = func(sayi1,sayi2);
    printf("%d",k);
    return 0;
}
int func(int sayi1,int sayi2){
    static int sayac=0;
    if(sayi1-sayi2>=0){
        sayac+=1;
        return func(sayi1-sayi2,sayi2);
    }
    else{
        return sayac;
    }
    
    
    
}
