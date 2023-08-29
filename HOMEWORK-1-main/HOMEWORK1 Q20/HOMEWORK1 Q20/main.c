//
//  main.c
//  HOMEWORK1 Q20
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to count number of digits in a number.
    int sayi,top =0;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    
    while(sayi>0){
        top+=1;
        sayi/=10;
        
    }
    printf("%d",top);
    return 0;
}
