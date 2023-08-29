//
//  main.c
//  LAB10 Q2
//
//  Created by my computer on 20.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Klavyeden -1 girilene kadar girilen sayıları diziye aktaran, ardından her elemanın karesini ekrana basan programı yazınız. (Dizi eleman sayısı max 10 olacaktır.)
    int i,top=0;
    int dizi[10];
    for(int j = 0 ; j<10;j++){
        
        printf("Bir i degeri giriniz\n");
        scanf("%d",&dizi[j]);
        
        
        if(dizi[j] == -1){
            break;
        }
        
           
        printf("%d\n",dizi[j]*dizi[j]);
        
    }
    return 0;
}
