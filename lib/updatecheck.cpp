#include "updatecheck.h"


using json = nlohmann::json;


CheckUpdate::CheckUpdate(std::string url)
{
    this->URL = url;
}

int CheckUpdate::compareversion(int cv)
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
                    // qDebug() << "Already Updated " << verison << "\n";
                    return verison;
                    // show there is new update or not
                }
                else
                {
                    // qDebug() << "There is new Update " << verison << "\n";
                    return verison;
                
                }
            }
        }
        catch (const std::exception &e)
        {
            qDebug() << e.what() << '\n';
            // return e.what();
        }
    }
}

CheckUpdate::~CheckUpdate()
{
}