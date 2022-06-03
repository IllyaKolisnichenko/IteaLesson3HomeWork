#include "header.h"

void swap(int *curr, int *nxt) {
    
    int temp = *curr;
    *curr = *nxt;
    *nxt = temp;
}
