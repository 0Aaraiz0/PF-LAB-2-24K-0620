#include <stdio.h>
#include <string.h>

int main(){
    char names[3][10] = {"Alice", "Bob", "Charlie"};
    char a;
    int j = 0;
    printf("Enter char:");
    scanf("%c", &a);

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; names[i][j] != '\0' ; j++){
              
                if(a == names[i][j]){
                    j = 1;
                    break;
                }
        }
    }
    if(j == 0){
    printf("%c is founded", a);
    }
    else printf("Not found");
    return 0;
}