//
//  main.c
//  HOMEWORK2 Q17
//
//  Created by my computer on 18.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // a flow chart to display the n terms of harmonic series and their sum. (1 +1/2+ 1/3 + 1/4 + 1/5 ... 1/n terms)
   
    float n;
    
    printf("Bir n degeri giriniz");
    scanf("%f",&n);
    
    
    float sonuc =0.0;
    float top =0.0;
    for(float a= 1.0;a<=n;a++){
        
        sonuc = 1.0 / a;
        top+=sonuc;
    }
    printf("%f",top);
    
   
    return 0;
}
