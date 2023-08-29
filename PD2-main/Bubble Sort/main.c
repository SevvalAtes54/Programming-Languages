//
//  main.c
//  Bubble Sort
//
//  Created by my computer on 11.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int dizi[5] ={27,12,45,6,14} ;
    int degisken;
    int sayac =0;
    for(int i = 0;i<5;i++){
        printf("%d ",dizi[i]);
    }
    printf("\n ");
  
    while(sayac<5){
        for(int j = 0;j<4;j++){
            if(dizi[j]>dizi[j+1]){
                degisken = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = degisken;
            }
            for(int i = 0;i<5;i++){
                printf("%d ",dizi[i]);
            }
            printf("\n ");
        }
        sayac++;
    }
    printf("\n ");
    printf("\n ");
    printf("\n ");
    for(int i = 0;i<5;i++){
        printf("%d ",dizi[i]);
       
        
    }
    
    return 0;
}
