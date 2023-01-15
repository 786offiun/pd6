#include <iostream>
using namespace std;
float checkprice(string day, float quantity, string fruit);

main()
{
  string fruit;
  float quantity;
  string day;
  float result1;
  cout << "enter the fruit :" << endl;
  cin >> fruit;
  cout << "enter the quantity:" << endl;
  cin >> quantity;
  cout << "enter the day:" << endl;
  cin >> day;
  if (day == "monday" || day == "tuesday" || day == "thersday" || day == "wednesday" || day == "friday" || day == "sunday")
  {
    if (fruit == "apple" || fruit == "graphefruit" || fruit == "banana" || fruit == "orange" || fruit == "graphes" || fruit == "kiwi" || fruit == "pineapple")
    {

      result1 = checkprice(day, quantity, fruit);
      cout << result1;
    }
    else
    {

      cout << "error" << endl;
    }
  }

  else
  {

    cout << "error" << endl;
  }
}
float checkprice(string day, float quantity, string fruit)
{
  float result;
  if (day == "saturday" || day == "sunday")
  {

    if (fruit == "banana")
    {
      result = quantity * 2.70;
    }
    else if (fruit == "apple")
    {
      result = quantity * 1.25;
    }
    else if (fruit == "orange")
    {
      result = quantity * 0.90;
    }

    else if (fruit == "grapefruit")
    {
      result = quantity * 1.60;
    }

    else if (fruit == "kiwi")
    {
      result = quantity * 3.00;
    }
    else if (fruit == "pineapple")
    {
      result = quantity * 5.60;
    }

    else if (fruit == "graphes")
    {
      result = quantity * 4.20;
    }
  }
  else if (day == "monday" || day == "tuesday" || day == "thersday" || day == "wednesday" || day == "friday")

  {

    if (fruit == "banana")
    {
      result = quantity * 2.50;
    }
    else if (fruit == "apple")
    {
      result = quantity * 1.20;
    }
    else if (fruit == "orange")
    {
      result = quantity * 0.85;
    }

    else if (fruit == "grapefruit")
    {
      result = quantity * 1.45;
    }

    else if (fruit == "kiwi")
    {
      result = quantity * 2.70;
    }
    else if (fruit == "pineapple")
    {
      result = quantity * 5.50;
    }

    else if (fruit == "graphes")
    {
      result = quantity * 3.85;
    }
  }
  return result;
}
