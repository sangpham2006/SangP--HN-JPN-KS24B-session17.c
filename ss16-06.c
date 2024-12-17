#include <stdio.h>

int findarr(int *arr, int n, int check) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == check) { 
            return i;  
        }
    }
    return -1; 
}

int main() {
   
    int arr[] = {20, 31, 5, 66, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int check = 5;  
    int index = findarr(arr, n, check);

    if (index != -1) {
        printf("Phan tu %d duoc tim thay o vi tri %d\n", check, index);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang\n", check);
    }

    return 0;
}

