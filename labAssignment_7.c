#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n, int num_swaps[]);

int main() {
    int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(int);
    int num_swaps[n];
    
    bubbleSort(arr, n, num_swaps);

    int iteration;
    for (iteration = 0; iteration < n; iteration++) {
        printf("Iteration: #%d: %d\n", iteration, num_swaps[iteration]);
    }
    
    return 0;
}

void bubbleSort(int arr[], int n, int num_swaps[]) {
    for (int i = 0; i < n; i++) {
        num_swaps[i] = 0;
    }
    
  
    for (int i = 0; i < n - 1; i++) {
      
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
             
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                num_swaps[j]++; 
      }
    }
  }
}
