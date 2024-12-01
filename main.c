
#include <stdio.h>
#include "list.h"

int main(void) {
    

    setList();
    print();
    printf("max : %d\n", listMax());
    printf("pop : %d\n", pop());
    
    
    return 0;
}
