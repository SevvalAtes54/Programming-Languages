//
//  main.c
//  Elimination
//
//  Created by my computer on 12.01.2023.
//

#include <stdio.h>
void shifting(char array[],int x);
void simplifying(char array[]);
int main(int argc, const char * argv[]) {
    int i = 0;
    char array[] = "555533322211222";
    simplifying(array);
    printf("\n");
    puts(array);
    printf("\n");
    return 0;
}
void simplifying(char array[]){
    
    int i=0;
    while(array[i]!='\0'){
        if(array[i]==array[i+1]){
            
            shifting(array,i);
        }
        else{
            i++;
            
        }
        
    }
    
}
void shifting(char a[],int i){
    
    for( ;a[i]!='\0';i++){
        a[i] = a[i+1];
    }
    
    
}

