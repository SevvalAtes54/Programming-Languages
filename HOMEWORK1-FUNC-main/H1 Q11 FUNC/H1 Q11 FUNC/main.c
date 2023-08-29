//
//  main.c
//  H1 Q11 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
void sayi_Al_ve_Yazdir();
int main(int argc, const char * argv[]) {
   
   sayi_Al_ve_Yazdir();
    return 0;
}


void sayi_Al_ve_Yazdir(){
    int sayilar[15],sum = 0;
    for (int a = 0 ; a<10;a++){
        
        printf("Bir sayi giriniz");
        scanf("%d",&sayilar[a]);
        sum += sayilar[a];
    }
    for (int a = 0 ; a<10;a++){
        
        
        printf("%d\n",sayilar[a]);

        
    }
    printf("%d",sum);
    
}

