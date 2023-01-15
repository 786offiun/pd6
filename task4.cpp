#include<iostream>
using namespace std;
float telephonebill(char customertype,float mins,char  time);
main()
{   
   char customertype;
   char time;
   float mins;
   float result;

   cout<<"Enter your connectin type: (r/p)"<<endl;
   cin>>customertype;
   cout<<"Enter your mins you have used : "<<endl;
   cin>>mins;
   cout<<"Eenter time day or night (d/n): (d/n)"<<endl;
   cin>>time;

  result = telephonebill(customertype,mins,time);
   
   if(result=0.000000)
   {
   cout<<result;
   }
   else
   {

   cout<<"error";

   }

}
float telephonebill(char customertype,float mins,char  time)
{
    float result;
 if(customertype=='r'||customertype=='p')
  {




  if(customertype=='r')
  {
        if(mins>50)
        {
        float ans;
        ans=mins-50;
        result=ans*10.0;
        }
        else
        {
             result=0;
        }
 }

if(customertype=='p')
{



  if(time='d')
{
   if(mins>75)
   {
    float ans1;
    ans1=mins-75;
   result=ans1*0.01;

   }

else
{
result=0;
}

}



if(time='n')
{
if(mins>100)
{
float ans3;
ans3=mins-100;
result=ans3*0.05;
}
else
{

result=0;

}
}


}
}
else
{

result=0.000000;
return result;
}

}