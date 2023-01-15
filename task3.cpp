#include<iostream>
using namespace std;
string checksign(int day, string  month);

main()
{ 
  string result;  
 int day;
 string month;
 cout<<"enter the day"<<endl;   
 cin>>day;
 cout<<"enter the month"<<endl;   
 cin>>month;
 result=checksign(day, month);
 cout<< "zodies sign:"<<result <<endl;
 if(result=="aries")
 {
   cout<<"symbbol: the ram"<<endl;
 }

if(result==" taurus")
 {
   cout<<"the symbol is :the bull "<<endl;
 }
if(result=="gemini ")
 {
   cout<<" the symbol is : the twins      "<<endl;
 }
if(result=="cencer  ")
 {
   cout<<" the symbol is : the carb      "<<endl;
 }
if(result=="leo   ")
 {
   cout<<" the symbol is : the lion      "<<endl;
 }

if(result==" virgo  ")
 {
   cout<<" the symbol is :the virgin      "<<endl;
 }

if(result=="libra   ")
 {
   cout<<" the symbol is : the scales       "<<endl;
 }

if(result=="scorpio   ")
 {
   cout<<" the symbol is : the scorpion      "<<endl;
 }

if(result=="sagittarius   ")
 {
   cout<<" the symbol is : the archer      "<<endl;
 }

if(result=="carpricorn   ")
 {
   cout<<" the symbol is :the goat       "<<endl;
 }

if(result=="aquarius   ")
 {
   cout<<" the symbol is : the water bearer      "<<endl;
 }


if(result=="pisces   ")
 {
   cout<<" the symbol is : the fishes      "<<endl;
 }




}
string checksign(int day, string  month)
{
    string result;
if(month=="match")
{
  if(day>=21||day<=30)
    {
     result="aries";

    }
}


if(month=="april")
{
  if(day>=1||day<=19)
    {
     result="aries";

    }
}



if(month=="april")
{
  if(day>=20||day<=30)
    {
     result="taurus";

    }
}




if(month=="may")
{
  if(day>=1||day<=20)
    {
     result="taurus";

    }
}



if(month=="may")
{
  if(day>=21||day<=30)
    {
     result="gemini";

    }
}


if(month=="june")
{
  if(day>=20||day<=30)
    {
     result="gemini";

    }
}


if(month=="june")
{
  if(day>=21||day<=30)
    {
     result="cencer";

    }
}



if(month=="july")
{
  if(day>=22||day<=30)
    {
     result="cencer";

    }
}


if(month=="july")
{
  if(day>=23||day<=30)
    {
     result="leo";

    }
}


if(month=="august")
{
  if(day>=22||day<=30)
    {
     result="leo";

    }
}


if(month=="august")
{
  if(day>=23||day<=30)
    {
     result="virgo";

    }
}


if(month=="september")
{
  if(day>=22||day<=30)
    {
     result="virgo";

    }
}


if(month=="september")
{
  if(day>=23||day<=30)
    {
     result="libra";

    }
}


if(month=="octobar")
{
  if(day>=22||day<=30)
    {
     result="libra";

    }
}

if(month=="octobar")
{
  if(day>=23||day<=30)
    {
     result="scorpio";

    }
}

if(month=="november")
{
  if(day>=22||day<=30)
    {
     result="sagittarius";

    }
}

if(month=="december")
{
  if(day>=21||day<=30)
    {
     result="sagittarius";

    }
}

if(month=="december")
{
  if(day>=22||day<=30)
    {
     result="capricorn";

    }
}
if(month=="january")
{
  if(day>=19||day<=30)
    {
     result="capricorn";

    }
}
if(month=="january")
{
  if(day>=20||day<=30)
    {
     result=" aquarius";

    }
}

if(month=="february")
{
  if(day>=18||day<=30)
    {
     result="aquarius";

    }
}
if(month=="match")
{
  if(day>=20||day<=30)
    {
     result="pisces";

    }
}
if(month=="february")
{
  if(day>=19||day<=30)
    {
     result="pisces";

    }
}

return result;


}
