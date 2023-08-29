//
//  main.c
//  HOMEWORK2 Q20
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Draw a flow chart to find the sum of the series [ x - x^3 + x^5 + ......].
    int sayi;
    
    printf("Bir sayi girinizz");
    scanf("%d",&sayi);
    int top=0;
    for(int a =3;a<=sayi ;a+=2){
        int us=1;
        for(int j =3;j<=a ;j+=3){
            
            us*=sayi;
            
            
        }
        
        
        top+=us;
    }
    top=top+sayi;
    
    printf("%d",top);
    
    
    
    return 0;
}
