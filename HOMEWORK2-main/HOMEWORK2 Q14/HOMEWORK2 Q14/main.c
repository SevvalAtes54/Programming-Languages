//
//  main.c
//  HOMEWORK2 Q14
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // a flow chart to print all Strong numbers between 1 to n.
    int n;
    printf("Bir sayi giriniz");
    scanf("%d",&n);
    for(int a =1; a<=n;a++){
        int kalan= 0;
        int fact = 1;
        int top=0;
        int deger;
        deger =a;
        while (deger>0) {
             
            kalan = deger%10;
            fact =1;
            for(int i = 1;i<=kalan;i++){
                
                fact *= i;
                
                
            }
            top+=fact;
            deger=deger/10;
            
        }
        
        if(top==a){
            printf("%d bir armstrong sayisidir\n",top);
        }
        
        
        
        
    }
    return 0;
}
