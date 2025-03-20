#include <cpr/cpr.h> 
#include <nlohmann/json.hpp>
#include <iostream>
#include <string>
#include <QtCore/QDebug>


#if !defined(UPDATECHECK_H)
#define UPDATECHECK_H



class CheckUpdate{
    private:
        std::string URL;

    public:
        CheckUpdate(std::string URL);

        int compareversion(int currentversion);

        ~CheckUpdate();

        
};

#endif // UPDATECHECK_H
