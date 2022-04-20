
#include <stdio.h>
#include <ctype.h>

int main(){
    char c;

    printf("Ingrese un caracter: ");
    c = getchar();
    

    if(islower(c)){
        putchar(toupper(c));
    } 
    else if(isupper(c)){
        putchar(tolower(c));

    }else if(isdigit(c)){
    }else{
       putchar(c);
    }

    
    return 0;
}
