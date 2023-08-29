//
//  main.c
//  frequency
//
//  Created by my computer on 12.01.2023.
//

#include <stdio.h>
void frequency(int dizi[]);
int main(int argc, const char * argv[]) {
    int dizi[10];
    for(int i =0;i<10;i++){
        
        scanf("%d",&dizi[i]);
        
        
    }
    
    frequency(dizi);
    
    
    return 0;
}
void frequency(int dizi[]){
    for(int i =0;i<10;i++){
        int a =1;
        for(int j=i+1;j<10;j++){
            if(dizi[i]==dizi[j]){
                a++;
               
                dizi[j]=-48953;
            }
            
          
        
            
        }if(dizi[i]!=-48953 ){
            printf("%d %d kez tekrarlanmistir\n",dizi[i],a);
            
        }
     
        
        
    }
    
    
}
