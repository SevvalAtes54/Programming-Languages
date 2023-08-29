//
//  main.c
//  HOMEWORK2 Q2
//
//  Created by my computer on 11.12.2022.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    // Draw a flowchart to find all the roots of a quadratic equation ax2+bx+c=0.
   
    float a ,b,c,kok1,kok2,diskr,diskrkoku;
    printf("Bir a degeri giriniz : ");
    scanf("%f",&a);   //x2 + 3x + 2
    printf("Bir b degeri giriniz : ");
    scanf("%f",&b);
    printf("Bir c degeri giriniz : ");
    scanf("%f",&c);
    
    diskr = b*b-(4*a*c); // diskr = x*x
    
    for(float i = 0.0 ; i< diskr;i++){
        if (i*i == diskr){
            
            diskrkoku = i;
        }
    }
    
    if(b*b-(4*a*c) > 0){
        
        kok1 =( -b + diskrkoku ) / 2*a;
        kok2 =( -b - diskrkoku ) / 2*a;
        printf("%d , %d",kok1,kok2);
    }
    else if(b*b-(4*a*c) == 0){
        
        kok1 =( -b + diskrkoku ) / 2*a;
        printf("%d",kok1);
    }
    else{
        
        printf("Kökü yoktur");
    }
    return 0;
}
