#include <stdio.h>

int main() {
    int arr[100];
    int num = 0, input;
    
    printf("Enter numbers (0 to stop): ");
    
    while (1) {
        scanf("%d", &input);
        
        if (input == 0) {
            break;
        }
        
        arr[num] = input;
        num++;
        printf(" ");
    }

    printf("\nNumbers in reverse order:\n");
    
    while (num > 0) {
        num--;
        printf("%d ", arr[num]);
    }

    return 0;
}