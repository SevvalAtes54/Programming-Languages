//
//  main.c
//  HOMEWORK2 Q11
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
   //a flow chart to check whether a number is Perfect number or not
    int sayi,top =0;
    printf("bir sayi giriniz");
    scanf("%d",&sayi);
    for(int i = 0;i<sayi;i++){
        if(sayi%i == 0){
            
            
            top+=i;
        }
    }
    if(top==sayi){
        printf("mukemmel sayidir\n");
    }
    
    else{
        printf("mukemmel sayi degildir\n");
    }
    return 0;
}
