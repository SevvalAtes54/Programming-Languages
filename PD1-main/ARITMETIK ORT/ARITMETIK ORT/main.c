//
//  main.c
//  ARITMETIK ORT
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //
    int sum = 0;
    int ort;
    
    int dizi[10],diziAltinda[10],diziUstunde[10];
    for(int i = 0;i<10;i++){
        printf("Bir sayi giriniz");
        scanf("%d",&dizi[i]);
        sum += dizi[i];
        
    }
    ort = sum/10;
    int  a=0;
   int   b=0;
    for(int i = 0;i<10;i++){
     
        if(dizi[i]>=ort){
            
            diziUstunde[a]= dizi[i];
            a++;
        }
        else{
            diziAltinda[b]= dizi[i];
            b++;
        }
        
    }
    for(int i = 0;i<a+1;i++){
        printf("%d ",diziAltinda[i]);
    
      
        
    }
    printf("\n");
    for(int i = 0;i<b+1;i++){
      
    
        printf("%d ",diziUstunde[i]);
        
    }
    
    
    
    return 0;
}
