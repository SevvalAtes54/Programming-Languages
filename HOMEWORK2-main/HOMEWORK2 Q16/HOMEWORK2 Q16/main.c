//
//  main.c
//  HOMEWORK2 Q16
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // a flow chart to find the sum of the series [ 1-X^2/2!+X^4/4!- .........].
    int sayi;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi);
    int formul;
    for (int i = 2 ;i<=sayi;i+=2){
        
        int fact = 1;
        int us=1;
        for(int a=1 ;a<=i;a++){
            fact*=a;
            us*=i;
        }
        
        formul =us/fact;
        
        
    }
    printf("%d",formul+1);
    return 0;
}
