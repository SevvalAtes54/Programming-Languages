//
//  main.c
//  HOMEWORK2 Q21
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to find the sum of the series 1 +11 + 111 + 1111 + .. n terms
    
    int n,top=0,sayi=0;
    printf("Bir n sayisi giriniz");
    scanf("%d",&n);
    
    for(int i =1;i<=n;i++){
        sayi=0;
        for(int j =1;j<=i;j++){
            
            sayi= (sayi*10)+1;
            
            
        }
        top+=sayi;
      
        
    }
        
    printf("%d",top);
    
    
    
    return 0;
}
