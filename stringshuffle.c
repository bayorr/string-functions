#include <stdio.h>
#include <stdlib.h>

#include "stringshuffle.h"

int simpleShuffle(char * a, char * b, char * c) {
    if(!a || !b || !c) return -1;

    int i = 0;
    while(a[i] != '\0') {
        b[i] = a[i];
        a++;
        c[i] = a[i];
        a++;
        b++;
        c++;
    }
    *b = '\0';
    *c = '\0';
}


int cutDeck(char * a, char * b, char * c) {   
    if(!a || !b || !c) return -1;
    //assert(stringlen(a) == stringlen(b));
    
    int i = 0;
    while(b[i] != '\0') {
        c[i] = b[i];
        i++;
    }
    int j = 0;
    while(a[j] != '\0') {
        c[i] = a[j];
        j++;
        i++;
    }
    c[i] = '\0';
}

int removeCut(char * a, char * b, char * c) {
    if(!a || !b || !c) return -1;
    int len = stringlen(a);
    if(len % 2 == 0) { // path is even
        int n = (len / 2);
        int i;
        for(i = 0; i < n; i++) {
            c[i] = a[i];
        }
        c[i] = '\0';
        
        int j;
        for(j = 0; j < n; j++) {
            b[j] = a[j+i];   
        }
        b[j] = '\0';
    }
    else {
        int n = ((len - 1) / 2);
        printf("[ODD string] n is %d\n", n);
        int i;
        for(i = 0; i < n; i++) {
            c[i] = a[i];
        }
        c[i] = '\0';
        
        int j;
        for(j = 0; j < n; j++) {
            b[j] = a[j+i];   
        }
        b[j+1] = '\0'; //another absurd detail... necessary because we were ((len - 1)/2)
    }
}

int removeShuffle(char * a, char * b, char * c) {
	if(!a || !b || !c) return -1;

    int i = 0;
    while(a[i] != '\0') {
        c[(2*i)] = a[i];
        i++;
    }

    int j = 0;
    while(b[j] != '\0') {
        c[(2*j+1)] = b[j];
        j++;
    }

    c[2*j+1] = '\0'; //this was an absurd detail...needs +1 to handle odd length strings.
}

int stringlen(char * a) {
    if(!a) return 0;
    int n = 0;
    while(a[n] != '\0') {
        n++;
    }
    return n;
}
