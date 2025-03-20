
#if !defined(UPDATECHECK_H)
#define UPDATECHECK_H

#include <iostream>
#include <string>
#include <cpr/cpr.h> // Include the cpr library
#include <nlohmann/json.hpp>

using json = nlohmann::json;


class CheckUpdate{
    private:
        std::string URL;

    public:
        CheckUpdate(std::string URL);

        void compareversion(int currentversion);

        ~CheckUpdate();

        
};

#endif // UPDATECHECK_H
