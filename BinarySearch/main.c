#include <stdio.h>
#include <stdlib.h>

int compare(int x, int y){
    if((x)<(y)) return -1;
    if((x)==(y)) return 0; 
    else return 1;
}

int binsearch(int list[], int searchnum, int left, int right) {
    int middle;
    if (left <= right) {
        middle = (left + right) / 2;
        switch (compare(list[middle], searchnum)) {
            case -1: return binsearch(list, searchnum, middle + 1, right);
            case 0: return middle;
            case 1: return binsearch(list, searchnum, left, middle - 1);
        }
    }
    return -1;
}

int main(int argc, char** argv) {
    int list[5]={1,2,3,4,5};
    printf("%d", binsearch(list , 8 , 0, 4));
    
    return (EXIT_SUCCESS);
}

