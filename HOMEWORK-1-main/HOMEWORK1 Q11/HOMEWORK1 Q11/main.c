//
//  main.c
//  HOMEWORK1 Q11
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,sum=0,sayi;
    printf("Bir sayi giriniz");
    scanf("%d",&a);
    
    for(a=1;a<=10;a++){
        printf("Bir sayi giriniz");
        scanf("%d",&sayi);
        
        sum+=sayi;
        
    }
    printf("%d",sum);
    return 0;
}
