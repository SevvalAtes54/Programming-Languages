//
//  main.c
//  HOMEWORK1 Q10
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c,largest;
    printf("Bir sayi giriniz \n");
    scanf("%d",&a);
    printf("Bir sayi giriniz \n");
    scanf("%d",&b);
    printf("Bir sayi giriniz \n");
    scanf("%d",&c);
    
    if (a>b){
        
        largest = a;
        if(c>a){
            
            largest = c;
        }
    }
    
    if (b>a){
        
        largest = b;
        if(c>b){
            
            largest = c;
        }
    }
    
    printf("%d",largest);
    return 0;
}
