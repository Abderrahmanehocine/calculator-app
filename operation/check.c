#include "check.h"

static bool new_number = true;

bool get_new_number(){
    return new_number;
}

void set_new_number(const char* true_or_false){
    if(strcmp(true_or_false,"true") == 0 && new_number == false){
        new_number = true;
    }
    else if(strcmp(true_or_false,"false") == 0 && new_number == true){
        new_number = false;
    }
}