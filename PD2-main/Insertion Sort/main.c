//
//  main.c
//  Insertion Sort
//
//  Created by my computer on 11.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int dizi[5] = {45,34,7,19,5};
    int degisken;
    int kontrol ;
    int kontrol2 ;
    for(int i = 1 ;i<5;i++){
        kontrol =   dizi[i];
        kontrol2 =   dizi[i];
        for(int j = i-1;j>=0;j--){
            
            if(kontrol<dizi[j]){
                printf("\n%d*****\n",kontrol);
                degisken = dizi[j];
                dizi[j]= kontrol2;
                dizi[j+1] = degisken; 
                
                
            }
            kontrol2=kontrol;
            printf("\n");
            for(int k = 0;k<5;k++){
                
                printf("%d ",dizi[k]);
                
                
            }
        }
       
        
    }
    printf("\n");
    
    for(int k = 0;k<5;k++){
        
        printf("%d ",dizi[k]);
    }
    
   
    return 0;
}
