#include "updatecheck.h"

CheckUpdate::CheckUpdate(std::string url)
{
    this->URL = url;
}

void CheckUpdate::compareversion(int cv)
{

    // request url
    cpr::Response res = cpr::Get(cpr::Url(URL));

    // check json
    if (res.status_code == 200)
    {
        try
        {
            json jsondata = json::parse(res.text);

            // debug jsondata
            // std::cout << "jsondata : " << jsondata.dump(4) << std::endl;

            if (jsondata.contains("version"))
            {
                // get the version number
                int verison = jsondata["version"];

                // compare with current version
                if (verison >= cv)
                {
                    // show there is new update or not
                    std::cout << "Already Updated " << verison << "\n";
                }
                else
                {
                    std::cout << "There is new Update " << verison << "\n";
                }
            }
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}

CheckUpdate::~CheckUpdate()
{
}