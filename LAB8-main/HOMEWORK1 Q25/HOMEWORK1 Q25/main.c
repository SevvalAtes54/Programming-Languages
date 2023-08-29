//
//  main.c
//  HOMEWORK1 Q25
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to find HCF (Highest Common Factor) of two numbers.
    int sayi1,sayi2;
    int ebob;
    printf("Bir sayi giriniz");
    scanf("%d",&sayi1);
    printf("Bir sayi giriniz");     // 30 25 ==> 5 sayi2 hep büyük alcaz
    scanf("%d",&sayi2);
    
    
    
    if(sayi1>sayi2 ){
        
        int c;
        c= sayi1 ;
        sayi1=sayi2;
        sayi2=c;
        
        
    }
    
    for (int i=1 ;i<=sayi1;i++){
        
        
        if(sayi1%i == 0 && sayi2%i ==0){
            
            ebob = i;
            
            
        }
        
        
    }
    
    printf("%d",ebob);
    
    
    return 0;
}
