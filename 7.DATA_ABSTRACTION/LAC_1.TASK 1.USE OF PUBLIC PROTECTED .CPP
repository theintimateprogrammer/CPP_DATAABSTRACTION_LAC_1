#include<iostream>
using namespace std;


class admin{
     public:
     
     char company_name[100];
     int total_staff;
    
    
    protected:
    
    int manager_salary;
    int employes_salary;
    int total_revenue;
    int can_terminate;
    
    
};


class manager:public admin{
    
   public:
   
   void myaccess(){
       
       
       cout<<"enter the comany name:-";
       cin>>company_name;
       cout<<"enter the staff:-";
       cin>>total_staff;
       cout<<"enter the manager salary:-";
       cin>>manager_salary;
       cout<<"enter the employes salary:-";
       cin>>employes_salary;
       cout<<"enter the total revenue:-";
       cin>>total_revenue;
       cout<<"enter the can terminate:-";
       cin>>can_terminate;
       
       }
    
};


class employes:public admin{
    
   public:
   
   void myaccess(){
       
       
       cout<<"enter the comany name:-";
       cin>>company_name;
       cout<<"enter the staff:-";
       cin>>total_staff;
       cout<<"enter the manager salary:-";
       cin>>manager_salary;
       cout<<"enter the employes salary:-";
       cin>>employes_salary;
       cout<<"enter the total revenue:-";
       cin>>total_revenue;
       cout<<"enter the can terminate:-";
       cin>>can_terminate;
       
       }
    
};

main(){
    manager obj;
    obj.myaccess();
    
    employes obj2;
    obj. myaccess();
    
    
    
    
    
}
    
