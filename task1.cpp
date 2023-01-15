#include<iostream>
using namespace std;
string checkit(string temperature,string humidity);
    

main()
{   
    string result;
    string temperature;
    string humidity;
    cout<<"enter the temperature:"<<endl;
    cin>>temperature;
    cout<<"enter the humidity:"<<endl;
    cin>>humidity;
   
    result=checkit(temperature,humidity);
    cout<<result;     


}
string checkit(string temperature,string humidity)
        {
          string result;  
          if(temperature=="warm")
           {
               if(humidity=="dry")
                {
                   result= "playtennis";
                }
                else
                 {
                    result="swim";
                 }
           }



          if(temperature=="cold")
           {
               if(humidity=="dry")
                {
                   result= "playbasticball";
                }
                else
                 {
                    result="watchtv";
                 }
           }




           return result;

        }
