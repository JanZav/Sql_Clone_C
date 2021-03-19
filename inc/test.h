//
// Created by Janzavec on 13/03/2021.
//

#ifndef SQL_CLONE_PARSERFORSQLCOMMANDS_H
#define SQL_CLONE_PARSERFORSQLCOMMANDS_H

#endif //SQL_CLONE_PARSERFORSQLCOMMANDS_H
//
// Created by Janzavec on 13/03/2021.
//
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>


#define BUF 250
#define INPUT_SYMBOL "-->   "

uint8_t input_length(char *input){
    uint8_t length = 0;
    while(*input != '\0'){
        length++;
        input++;
    }
    return length;
}
void trimInput(char *input){
    while(*input != '\0'){
        if(*input == ' '){

            *input = *(input+1);

        }
        input++;

    }

}
bool checkValidOption(const char *in){
    switch(*in){
        case '1':
            return 1;
            break;
        case '2':
            return 1;
            break;
        case '3':
            return 1;
            break;
        case '4':
            return  1;
            break;
        case '5':
            return 1;
            break;
        default:
            return 0;
            break;




    }








}


void listOptions(){
    printf("\n What do you want to do: ");
    printf("\n 1. Create table. ");
    printf("\n 2. See a List of all tables.");
    printf("\n 3. Select a table.");
    printf("\n 4. Delete User.");
    printf("\n 5. Exit and have a nice day \n");
    printf( INPUT_SYMBOL);


}
