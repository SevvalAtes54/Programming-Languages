//
//  main.c
//  HOMEWORK1 Q14
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sayi,carpim=1;
    printf("Sayi giriniz");
    scanf("%d",&sayi);
    
    for (int i = sayi ;i>0 ;i--){
        
        carpim *= i;
        
        
    }
    printf("%d",carpim);
    return 0;
}
