//
//  main.c
//  HOMEWORK2 Q6
//
//  Created by my computer on 11.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to find LCM of two numbers.
    int sayi1,sayi2,ekok,ebob;
    printf("Bİr sayi giriniz");
    scanf("%d",&sayi1);
    printf("Bİr sayi giriniz");
    scanf("%d",&sayi2);
    
    if (sayi1 > sayi2){
        int c;
        c= sayi1;
        sayi1 =sayi2;
        sayi2= c;
        
    }
    for (int i = 1;i<sayi1;i++){
        
        if(sayi1%i==0 && sayi2%i== 0){
            ebob =i;
            
        }
        
        
    }
    
    ekok = (sayi1*sayi2)/ebob;
    printf("%d\n",ebob);
    printf("%d",ekok);
    
    return 0;
}
