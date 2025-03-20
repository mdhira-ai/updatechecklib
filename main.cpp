#include <iostream>
#include "lib/updatecheck.h"


int main(int, char**){

    CheckUpdate getupdate("https://raw.githubusercontent.com/mdhira-ai/testupdategui/refs/heads/master/version.json");

    getupdate.compareversion(1);

    // tasks

    // to make a download link




}
