//
//  main.c
//  H1 Q7 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
void squareFunc();
int main(int argc, const char * argv[]) {
    squareFunc();
    
    return 0;
}
void squareFunc(){
    
    for(int i = 1 ;i <=10;i++){
        
        int sonuc = 1 ;
        sonuc = i*i;
        printf("karesi :%d",sonuc);
    }
   
}
