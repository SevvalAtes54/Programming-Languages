//
//  main.c
//  ZORSORU
//
//  Created by my computer on 9.01.2023.
//

#include <stdio.h>
int strLength(int dizi[]);
int strReverse(int dizi[],int k);
int main(int argc, const char * argv[]) {
    char chr[] = "sevval";
    int d = strLength(chr);
   int a[d+1] = strReverse(chr,d);
    printf("%d ",d);

   
    return 0;
}
int strLength(int dizi[]){
    int a =0;
    while(dizi[a]!='\0'){
      
        a++;
    }
    return a+1;
}
int strReverse(int dizi[],int k){
    int degisken ;
    for(int i =0;i<=k/2;k++){
        degisken = dizi[i];
        dizi[i] = dizi[k-1-i];
        dizi[k-1-i] = degisken;
        
    }
    return dizi[];
    
    
}

