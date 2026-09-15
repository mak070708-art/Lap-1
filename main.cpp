/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream> 
using namespace std;
int main(){
    double baseSalary,totalSales,commissionRate,pay;
    cout<<"\n Pleas enter the base salary :";
    cin>>baseSalary;
    cout<<"\n Pleas enter the total sales:";
    cin>>totalSales;
    cout<<"\n Pleas enter the commission rate:";
    cin>>commissionRate;
    pay=baseSalary+(totalSales*commissionRate);
    cout<<"n The salesperson\'s pay= "<<pay;
    return 0;
    
    std::cout<<"Hello World";

    return 0;
}