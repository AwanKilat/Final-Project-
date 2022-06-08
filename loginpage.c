#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>
#define max 100 

int main () {

    char username1[max], username2[max], password1[max], password2[max], retry;
    int pass;
    
    // SIGN UP STUDENT
    printf("------------------------------------------");
    printf("\n||\t\tSIGNUP PAGE\t\t||");
    printf("\n------------------------------------------\n");
    printf("\n\tEnter user name : ");
    gets(username1);
    printf("\n\tEnter new password : ");
    gets(password1);
    strcpy(password2, password1);
    printf("\n\n\tThanks for sign in this website. \n\t\t-minilove-\t\t");
    printf("\n\n\n\t<<<<Press ENTER >>>>\t");
    getch();
    system("cls");

    // LOG IN STUDENT

    printf("------------------------------------------");
    printf("\n||\t\tLOG IN PAGE\t\t||");
    printf("\n------------------------------------------\n");

    do {
        printf("\n\tUsername : ");
        gets(username2);
        printf("\n\tPassword : ");
        for (int i=0; i<strlen(password2); i++){
            password2[i]=getch(); 
            printf("-");
        }

        if (strcmp(username2, username1) == 0 && (strcmp(password2, password1) == 0)){
            pass = 0;
        } else {
            pass = 1;
            printf("\n\nIncorrect Username or Password");
            printf("\n<<< Press Enter to Try Again Login the system >>>\n\n");
            getche();
            system("cls");   
            printf("Welcome to our System.\n");
        }
    } while (pass == 1);

printf("\n\n\n\tYou are in the system log in");
printf("\n\n\n\t<<< Press Enter >>>\n");
getche();
system("cls");

char nama[max];
printf("------------------------------------------");
printf("\n||\t\tBIODATA ANDA\t\t||");
printf("\n------------------------------------------\n");
printf("\n\tEnter your name : ");
gets(nama);
char matricNum[max];
printf("\n\tMatric Number : ");
gets(matricNum);
printf("\n\t<<< Press Enter>>>\t");
getche();
system("cls");


printf("------------------------------------------");
printf("\n||\t\tUTHM PASS\t\t||");
printf("\n------------------------------------------\n");
strupr(nama);
printf("\nRegistered Name  : %s", nama);
char copymatric[50];
strcpy(copymatric, matricNum);
strupr(copymatric);
printf("\nMatric Number    : %s", copymatric);
puts("");
strlwr(matricNum);
const char GMAIL[]= "@siswa.uthm.edu.my";
printf("\nStudent Email    : %s%s", matricNum, GMAIL);
puts("\n");
printf("\n<<< Press Enter>>>\n\n");
getche();
system("cls");

    return 0;
}