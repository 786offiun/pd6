#include <iostream>
using namespace std;
float studio(int stay, string month);
float apartment(int stay, string month);
main()
{

    int stay;
    string month;
    cout << "Enter the stay:" << endl;
    cin >> stay;
    cout << "Enter the month:" << endl;
    cin >> month;
    float resul1 = studio(stay, month);
    float result2 = apartment(stay, month);
    
    cout <<"studio:"<< resul1 << endl;
    cout << "aprtment:" << result2 << endl;
}

float studio(int stay, string month)
{
    float result;

    if (month == "may" || month == "octobar")
    {
        if (stay >= 7 && stay <= 14)
        {
            result = stay * 50;
            float discount1 = 0.05 * result;
            result = result - discount1;
        }
        else if (stay > 14)
        {

            result = stay * 50;
            float discount1 = 0.3 * result;
            result = result - discount1;
        }
        else
        {

            result = stay * 50;
        }
    }

    else if (month == "june" || month == "september")
    {

        if (stay > 14)
        {
            result = stay * 75.20;
            float discount1 = 0.2 * result;
            result = result - discount1;
        }
        else
        {

            result = stay * 75.20;
        }
    }

    else if (month == "july" || month == "august")
    {

        result = stay * 76;
    }

    return result;
}

float apartment(int stay, string month)
{
    float result;

    if (month == "may" || month == "octobar")
    {
        if (stay > 14)
        {
            result = stay * 65;
            float discount1 = 0.1 * result;
            result = result - discount1;
        }

        else
        {

            result = stay * 65;
        }
    }

    else if (month == "june" || month == "september")
    {

        if (stay > 14)
        {
            result = stay * 68.70;
            float discount1 = 0.1 * result;
            result = result - discount1;
        }
        else
        {

            result = stay * 68.70;
        }
    }

    else if (month == "july" || month == "august")

        if (stay > 14)
        {
            result = stay * 77;
            float discount1 = 0.1 * result;
            result = result - discount1;
        }

        else
        {

            result = stay * 77;
        }

    return result;
}
