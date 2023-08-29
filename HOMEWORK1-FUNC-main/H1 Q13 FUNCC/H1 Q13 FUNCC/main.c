//
//  main.c
//  H1 Q13 FUNCC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
void printFunc();
int main(int argc, const char * argv[]) {
    // Write an algorithm and draw a flowchart to print the multiplication table for 6's.
    printFunc();
    return 0;
}
void printFunc(){
    for(int i = 0 ; i<= 10;i++){
      int  sonuc = 0;
        sonuc = 6*i;
        
        printf("%d\n",sonuc);
    }
    
    
}
