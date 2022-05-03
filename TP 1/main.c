// Guido Gelvan
#include <stdio.h>
#include <ctype.h>

int main(){
        int c;
      
    printf("Ingrese un caracter: ");
    
while((c = getchar()) != '\n' && c != EOF){
    if(islower(c)){
     putchar(toupper(c));
        
    } 
    else if(isupper(c)){
       putchar(tolower(c));

    }else if(isdigit(c)){
    }else{
       putchar(c);
    }
}
    return 0;
}
