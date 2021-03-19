//
// Created by Janzavec on 19/03/2021.
//

//
// Created by Janzavec on 13/03/2021.
//
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "test.h"
#include <stdbool.h>
#include <math.h>



typedef struct UserData{
    char *name;
    char *password;

}user_data;

typedef struct ListofUsers{
    user_data *users;
    struct users_list *next;

}users_list;
bool is_prime(unsigned num)
{
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for(int i = 3; i < num / 2; i+= 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

bool chck(char* arr, int n) {
    int length = strlen(arr);
    if (length == n) {
        return false;
    }
    printf("%d", length);
    for (unsigned int i = 0; i <= length; i++) {
        if (arr[i] != 'A' && arr[i] != 'B' && arr[i] != 'C') {
            return false;
        }
    }
    return true;
}

int main(int argc, char** argv){


    printf("testddadsadasdadwwa");
    printf("Welcome to the SQL Clone \n\n");


    users_list *head = NULL;
    //users_list  *next = NULL;
    printf("Username: ");
    head = (users_list*) malloc(sizeof(users_list));
    head -> users = (user_data*) malloc(sizeof(user_data) );
    head -> users ->name = malloc(sizeof(char )* BUF);
    head -> users ->password = malloc(sizeof(char )* BUF);

    gets(head->users->name);
    printf("Password: ");

    gets(head->users->password);
    printf("\n\n\n");
    printf("Welcome to the application, this is a \n ");
    printf("Costum made sql clone, which tries to function like one \n");




    while(1){


        char *decision = malloc(sizeof( char) * BUF);
        listOptions();


        gets(decision);
        printf("%s", head->users->name);

        trimInput(decision);
        printf(" \n%s", decision);

        //bool test = checkValidOption(decision);
        switch (*decision) {
            case '1':
                break;
            case '5':
                printf("IT worked");
                return 0;
            default:
                break;
        }





    }



}
