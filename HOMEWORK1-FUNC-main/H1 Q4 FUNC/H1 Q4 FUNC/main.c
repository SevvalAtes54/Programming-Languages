//
//  main.c
//  H1 Q4 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
void freezingPoinT_Check(int a);
int main(int argc, const char * argv[]) {
    // Determine Whether a Temperature is Below or Above the Freezing Point.
    int deger ;
    printf("Bir deger giriniz");
    scanf("%d",&deger);
    freezingPoinT_Check(deger);
    
    return 0;
}

void freezingPoinT_Check(int a){
    if(a<0){
        printf("altında");
    }
    else if(a==0){
        printf("donma noktasında");
    }
    else{
        printf("ustunde");
    }
    
}
