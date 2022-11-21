 #include<iostream>
 //using namespace std;
 class Account{
 public:
     int salary = 5000;
 };

 class Programmer:public Account{
 public:
     int bonus = 500;
 };

 int main()
 {
     Programmer p;
     std::cout<<"salary= "<<p.salary<<std::endl;
     std::cout<<"bonus= "<<p.bonus;
     return 0;
 }
