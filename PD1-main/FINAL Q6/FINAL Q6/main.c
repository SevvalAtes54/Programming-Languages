//
//  main.c
//  FINAL Q6
//
//  Created by my computer on 9.01.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ort =0;int a =4,dizi[4][5];
    for( int i =0;i<4;i++){
         for(int j =0;j<5;j++){
             scanf("%d",&dizi[i][j]);
         }
    }
    for( int i =0;i<4;i++){
        ort = 0;
         for(int j =1;j<4;j++){
             ort+=dizi[i][j];
         }
        dizi[i][4]=ort/3;
    }
    int son = 0;
   int enyuksek = dizi[0][4];
    
    for( int i =0;i<4;i++){
        if(dizi[i][4]>enyuksek){
            enyuksek =dizi[i][4];
            son =i;
            
        }
        
    }
    printf("%d kimlikli ogrencinin ortalaması en yuksek ve %d dir",dizi[son][0],dizi[son][4]);
    
    
    
    
    
    
    return 0;
}
