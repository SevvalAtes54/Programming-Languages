//
//  main.c
//  DiziBirlestir
//
//  Created by my computer on 6.04.2023.
//

#include <stdio.h>
#include <stdlib.h>
int *diziBirlestir(int dizi1[ ],int boyut1,int dizi2[ ],int boyut2);
int main(int argc, const char * argv[]) {
    int dizi[7]={2,4,6,5,9,9,12};
    int dizi2[5]={1,34,76,23,98};
    int *ptr;
    ptr =  diziBirlestir(dizi, 7, dizi2, 5);
    for(int i = 0;i<12;i++){
        
        printf("%d ",*(ptr+i));
    }
    
    return 0;
}
int *diziBirlestir(int dizi1[ ],int boyut1,int dizi2[ ],int boyut2){
    int *sonuc = (int *)calloc(boyut1+boyut2,sizeof(int));
    int i =0;
    for( i;i<boyut1;i++){
        *(sonuc+i)=dizi1[i];
        
    }
    for(int a=0;a<boyut2;a++){
        *(sonuc+i)=dizi2[a];
        i++;
        
    }
   
    
    return sonuc;
}
