#include <stdio.h>
#include <string.h>

int main(){
    char words[5][20] = {"maham", "racecar", "goblin", "level", "faihqueh"};
    int a;



/*  printf("Enter Words:");
        for (int i = 0; i < 5; i++){
        scanf("%s", words[i]);
        }
        */



        for (int i = 0; i < 5; i++) {
            a = 0;
            for (int j = 0; j < strlen(words[i])/2; j++){
                    if(words[i][j] == words[i][strlen(words[i])-j-1]){
                        a++;
                    }
                if(a == strlen(words[i])/2){
                    printf("%s is palindrome\n", words[i]);
                }
        }
}
return 0;
}