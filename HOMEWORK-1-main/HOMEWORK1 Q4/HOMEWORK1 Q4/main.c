//
//  main.c
//  HOMEWORK1 Q4
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Determine Whether a Temperature is Below or Above the Freezing Point.
   
    int sicaklik;
    
    printf("Bir sıcaklık degeri giriniz");
    scanf("%d",&sicaklik);
    if(sicaklik>0){
        
        printf("Sicaklik donma noktasinin üstünde");
    } if(sicaklik<0){
        
        printf("Sicaklik donma noktasinin altinda");
    } if(sicaklik==0){
        
        printf("Sicaklik donma noktasinda");
    }
    return 0;
}
