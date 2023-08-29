//
//  main.c
//  HOMEWORK1 Q19
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to print multiplication table of any number.
    int sayi ;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    for(int i = 0 ;i<=10 ; i++){
        int deger =1;
        deger = sayi * i;
        printf("%d",deger);
        
        
    }
    return 0;
}
