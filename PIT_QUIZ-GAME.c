
#include <stdio.h>
#include <ctype.h>
#include <string.h>


void showMenu();
char getAnswer();
int askQuestion(int number);
void showResult(char name[], int score);
void playQuiz();
void clearInputBuffer();

int main() {
    char choice;

    do {
        showMenu();
        scanf(" %c", &choice);
        clearInputBuffer();

        switch (choice) {
            case '1':
                playQuiz();
                break;
            case '2':
                printf("\nAnswer 10 questions by typing A, B, C, or D.\n");
                printf("Each correct answer is worth 10 points.\n");
                printf("You need at least 60%% to pass.\n");
                break;
            case '3':
                printf("\nGoodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please enter 1, 2, or 3.\n");
        }
    } while (choice != '3');

    return 0;
}


void showMenu() {
    printf("\n=== C PROGRAMMING QUIZ ===\n");
    printf("1. Start Quiz\n");
    printf("2. Instructions\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
}


char getAnswer() {
    char answer;

    printf("Your answer (A/B/C/D): ");
    scanf(" %c", &answer);
    clearInputBuffer();
    answer = toupper(answer);

    while (answer < 'A' || answer > 'D') {
        printf("Invalid. Please type A, B, C, or D: ");
        scanf(" %c", &answer);
        clearInputBuffer();
        answer = toupper(answer);
    }

    return answer;
}


int askQuestion(int number) {
    char correct;
    char answer;

    printf("\nQuestion %d of 10\n", number);

    switch (number) {
        case 1:
            printf("Which data type stores whole numbers?\n");
            printf("A. float  B. int  C. char  D. double\n");
            correct = 'B';
            break;
        case 2:
            printf("Which symbol ends a statement in C?\n");
            printf("A. .  B. :  C. ;  D. ,\n");
            correct = 'C';
            break;
        case 3:
            printf("Which function prints output?\n");
            printf("A. scanf()  B. print()  C. input()  D. printf()\n");
            correct = 'D';
            break;
        case 4:
            printf("Which loop always runs at least once?\n");
            printf("A. for  B. while  C. do-while  D. if\n");
            correct = 'C';
            break;
        case 5:
            printf("What is the result of 7 %% 3?\n");
            printf("A. 1  B. 2  C. 0  D. 3\n");
            correct = 'A';
            break;
        case 6:
            printf("Which keyword stops a case in a switch statement?\n");
            printf("A. stop  B. break  C. exit  D. end\n");
            correct = 'B';
            break;
        case 7:
            printf("Which return type is used when a function returns no value?\n");
            printf("A. void  B. int  C. char  D. float\n");
            correct = 'A';
            break;
        case 8:
            printf("What is the index of the first element of an array?\n");
            printf("A. 1  B. -1  C. 0  D. 2\n");
            correct = 'C';
            break;
        case 9:
            printf("Which operator checks if two values are equal?\n");
            printf("A. =  B. :=  C. =>  D. ==\n");
            correct = 'D';
            break;
        case 10:
            printf("Which function gets the length of a string?\n");
            printf("A. strlen()  B. strcpy()  C. strcmp()  D. strcat()\n");
            correct = 'A';
            break;
        default:
            printf("Unknown question.\n");
            correct = 'A';
    }

    answer = getAnswer();

    if (answer == correct) {
        printf("Correct! +10 points\n");
        return 10;
    } else {
        printf("Wrong. The correct answer is %c.\n", correct);
        return 0;
    }
}


void showResult(char name[], int score) {
    float percentage = (float)score / 100 * 100;

    printf("\n=== RESULT ===\n");
    printf("Player     : %s\n", name);
    printf("Score      : %d / 100\n", score);
    printf("Percentage : %.1f%%\n", percentage);

    if (percentage >= 60) {
        printf("Remark     : PASSED\n");
    } else {
        printf("Remark     : FAILED\n");
    }
}


void playQuiz() {
    char name[50];
    int score = 0;

    printf("\nEnter your name: ");
    fgets(name, sizeof(name), stdin);


    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    } else {
        clearInputBuffer();
    }

    for (int i = 1; i <= 10; i++) {
        score = score + askQuestion(i);
    }

    showResult(name, score);
}

void clearInputBuffer() {
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF) {
    }
}
