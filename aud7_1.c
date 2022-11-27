#include <stdio.h>
#include <stdlib.h>

// Quicksort ascending


void quicksort(int *array[], int left, int right){
    int l = left;
    int r = right;
    int pivot = (right - left) / 2;
    int pivotElement = array[pivot];
    int swap;
    do {
        while(array[l] < pivotElement) l += 1;
        while(array(r) > pivotElement) r -= 1;

        if (l <= r) {
            swap = array[l];
            array[l] = array[r];
            array[r] = swap;
        }
    } while (l <= r);

    if (left < r) {quicksort(array[], left, pivot - 1);}
    if (right < l) {quicksort(array[], right, pivot + 1);}

}


void printArray(int array[], int start, int end) {
    printf("{%d", array[start]);
    for(int i = start+1, i<= end, i++){
        printf(",%d", array[i]);
    }
    printf("}");
}   



int main(){
    int array[5] = {4,7,6,2,9};
    
    quicksort(&array, 0, 4);



    return 0;
}
