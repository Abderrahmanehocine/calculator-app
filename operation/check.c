#include "check.h"

static bool new_number = true;
static bool check_new_operation = false;

bool get_new_number(){
    return new_number;
}

void set_new_number(const char* true_or_false){
    if(strcmp(true_or_false,"true") == 0 && new_number == false)
        new_number = true;
    else if(strcmp(true_or_false,"false") == 0 && new_number == true)
        new_number = false;
}

bool check_number(float num){
    (num > FLT_MAX) ? printf("true\n") : printf("false\n"); 
    //(num > FLT_MAX) ? true : false;
}

void set_new_operation(const char* true_or_false){
    if(strcmp(true_or_false,"true") == 0 && check_new_operation == false)
        check_new_operation = true;
    else if(strcmp(true_or_false,"false") == 0 && check_new_operation == true)
        check_new_operation = false;
}

bool get_new_operation(){
    return check_new_operation;
}

bool check_last_char(const char* op){
    if(op[strlen(op)-1] < '0' || op[strlen(op)-1] >'9' || op[strlen(op)-1] == '.' || op[strlen(op)-1] == '\0')
        return true;
    return false;
}

