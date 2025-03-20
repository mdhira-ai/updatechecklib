#include <iostream>
#include "updatecheck.h"


int main(int, char**){

    CheckUpdate getupdate("https://raw.githubusercontent.com/mdhira-ai/testupdategui/refs/heads/master/version.json");

    int dd = getupdate.compareversion(2);

    std::cout << dd;
    // tasks

    // to make a download link




}
