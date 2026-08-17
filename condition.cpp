#include<iostream>
using namespace std;
int main()
{
int age;
std::cout<<"enter your age: ";
std::cin>>age;
if(age>=18)
{
std::cout<<"you are eligible to vote"<<std::endl;
}
else
{
std::cout<<"your are not eligible to vote"<<std::endl;
}
return 0;
}
