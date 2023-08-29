//
//  main.c
//  HOMEWORK Q1
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
     int a;
     int toplam = 0 ;
     for(int i = 0 ; i < 2 ; i++){
         printf("Sayi giriniz.\n\n");
         scanf("%d",&a);
         printf("%d. sayi = %d\n",i+1,a);
         toplam += a;
     }
     printf("Toplam = %d\n",toplam);
    
    
    return 0;
}
