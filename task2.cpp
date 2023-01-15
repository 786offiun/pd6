#include<iostream>
using namespace std;
float totalmarks(float math,float english,float bio,float sscience,float chemistry);
float percentage(int result1);
 string  grade(float result2);
main()
{   string  result3;
    float result1;
    float result2;
    string name;
    float math;
    float english;
    float bio;
    float chemistry;
    float sscience;
    
     cout<<"enter your name :"<<endl;
     cin>>name;
     cout<<"enter the math marks:"<<endl;
     cin>>math;
     cout<<"enter the  bio marks:"<<endl;
     cin>>bio;     
     cout<<"enter the  chemistry marks:"<<endl;
     cin>>chemistry;
     cout<<"enter the  s.science: marks"<<endl;
     cin>>sscience;
     cout<<"enter the english marks:"<<endl;
     cin>>english;
    
    result1=totalmarks(math,english,bio,sscience,chemistry);
    result2=percentage(result1);
    result3=grade(result2);
    
    cout<<"your name is "<<name<<endl;
    cout<<"your total marks:"<<result1<<endl;
    cout<<"your percentage is :"<<result2<<endl;
    cout<<"your grade is :"<<result3<<endl;



}
float totalmarks(float math,float english,float bio,float sscience,float chemistry)
{
  float ans;
   ans=(math+chemistry+bio+sscience+english);
  return ans;


}
float percentage(int result1)
{
  float ans1;
   ans1=(result1/5);
    return ans1;


}
string grade(float result2)
{
    string  answer;
if(result2>=50||result2<=60)
{
answer="c";

}
else if(result2>=61||result2<=70)
{
 answer="b";
}

else if(result2>=71||result2<=80)
{
 answer="b+";
}

else if(result2>=81||result2<=90)
{
 answer="a";
}

else if(result2>=91||result2<=100)
{
 answer="a+";
}
return answer;


}