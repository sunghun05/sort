
#include <stdio.h>
#include "list.h"

int main(void) {
    
    int index, data;
    setList();
    print();
    printf("max : %d\n", listMax());
    printf("pop : %d\n", pop());
    printf("데이터를 삽입할 위치와 데이터를 각각 입력하시오 (예: 1 30) >>\n");
    scanf("%d %d", &index, &data);
    print();
    
    
    return 0;
}
