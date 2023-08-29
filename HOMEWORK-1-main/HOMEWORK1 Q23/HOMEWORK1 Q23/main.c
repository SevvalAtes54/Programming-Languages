//
//  main.c
//  HOMEWORK1 Q23
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to check whether a number is palindrome or not.
    
    int sayi,reversed=0,kalan=0;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    
    int degisken = sayi;
    
    while(sayi>0){
        kalan= sayi%10;
        sayi =sayi/10;
        reversed = (reversed *10) +kalan;
        
    }
    
    if(reversed ==degisken){
        
        printf("Sayi polindromdur");
    }else{
        printf("Sayi polindrom degildir");
    }
    
    
    return 0;
}
