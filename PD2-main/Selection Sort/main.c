//
//  main.c
//  Selection Sort
//
//  Created by my computer on 11.03.2023.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int dizi[5] = {43,12,35,6,29};
    int degisken;
   
    
    for(int i = 0;i<5;i++){
        for(int j =i+1;j<5;j++){
            if(dizi[i]>dizi[j]){
                degisken = dizi[i];
                dizi[i]= dizi[j];
                dizi[j]= degisken;
                
                
                
            }
        }
    }
    for(int i = 0;i<5;i++){
        
        printf("%d ",dizi[i]);
    }
    
    
   
    return 0;
}
