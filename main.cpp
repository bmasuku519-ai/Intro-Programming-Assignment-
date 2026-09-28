#include <iostream>

using namespace std;

int main()
{
int EmployeeID;
 string EmployeeName;
 double basicSalary;
 string Department;
 int PerformanceRating;
 int YearofService;
 double bonusRate = 0.0;
 double bonusAmount;
 double serviceBonus = 0.0;
 double totalBonus;
 double totalPay;

    cout <<"==========================================="<<endl;
    cout <<"          EMPLOYESS PAYROLL SYSTEM"       <<endl;
    cout <<"==========================================="<<endl;


 cout<< "Employee ID: ";
 cin>>EmployeeID;

 cout<<"Employee Name: ";
 cin>>EmployeeName;

 cout<<"Basic Salary: R ";
 cin>>basicSalary;

 if (basicSalary < 0){
    cout<<"Salary cannot be negative."<<endl;
    cout<< "Basic Salary Again: R";
    cin >>basicSalary;
 }

  cout<< "Performance Rating (1-5): ";
  cin>>PerformanceRating;
if (PerformanceRating <1 || PerformanceRating >5)
{
    cout<< "Invalid rating. Please enter a rating from 1 to 5: ";
    cin >>PerformanceRating;
}

 cout<< "Years Of Service: ";
 cin>>YearofService;
   if (YearofService <0)
   {
       cout <<"Years of service cannot be negative." <<endl;
       cout << "Years of Service again: ";
       cin>>YearofService;
   }

   if (PerformanceRating ==5)
   {
       bonusRate = 0.20;
   }
   else if (PerformanceRating ==4)
   {
       bonusRate = 0.15;
   }
   else if (PerformanceRating == 3)
   {
      bonusRate = 0.10;
   }
   else if (PerformanceRating == 2)
   {
       bonusRate = 0.05;
   }
   else if (PerformanceRating == 1)
   {
       bonusRate = 0.00;
   }
bonusAmount = basicSalary * bonusRate;

   if (YearofService >= 5)
   {
       serviceBonus = basicSalary * 0.05;
   }
   // Calculate total bonus
   totalBonus = bonusAmount + serviceBonus;

   // Calculate total pay
   totalPay = basicSalary + totalBonus;

cout <<"============= PAYROLL RESULT ==============" <<endl;
cout<< "Employee ID:        " << EmployeeID <<endl;
cout << "Employee Name:     " << EmployeeName << endl;
cout << "Basic Salary:      R" << basicSalary << endl;
cout << "Performance Rating:" << PerformanceRating << endl;
cout << "Years of Service:  " << YearofService << endl;
cout << "Performance Bonus: R" << bonusAmount << endl;
cout << "Service Bonus:     R" << serviceBonus << endl;
cout << "Total Bonus:       R" << totalBonus << endl;
cout << "Total Pay:         R" << totalPay << endl;
cout << "==========================================" << endl;


  cout <<"\nThank you for using the Employee Payroll System!" <<endl;

    return 0;



}
