void swap(int *curr, int *nxt) {
    int temp = *curr;
    *curr = *nxt;
    *nxt = temp;
}

void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                swap((arr + j), (arr + j + 1));
            }
        }
    }
}
