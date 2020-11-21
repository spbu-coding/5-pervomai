#include <stdio.h>

void other(){
    printf("Congratulations! You've made buffer overflow");
    fflush(stdout);
};

void input(){
    char buffer[8];
    printf("Enter a word: \n");
    scanf("%s", buffer);

    printf("%p \n", &other);

    printf("Your word: %s \n", buffer);
    fflush(stdout);
}

int main() {
    input();
    printf("Work is correct");
    return 0;
}
