#include <string>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    //first, I asked for the user to input a month, a day, and a year, which will help me in my calculations
    string Month;
    cout << "Provide a month:";
    getline ( cin, Month);
    
    int Day;
    cout << "Provide a day:";
    cin >> Day;
    
    int Year;
    cout << "Provide a year:";
    cin >> Year;
    
// I declared the formulas for year code, century value, then proceeded to declare the century code and included a bunch of if-statements to set rules for century value and century code
    int YearCode= (Year % 100) / 4 + (Year % 100);
    int CenturyValue = Year / 100 % 4;
    int MonthCode;
    int CenturyCode;

    if ( CenturyValue==0){
        CenturyCode=-2;
    }
    if ( CenturyValue==1){
        CenturyCode=3;
    }
    if ( CenturyValue==2){
        CenturyCode=1;
    }
    if ( CenturyValue==3){
        CenturyCode=-1;
    }
   
//I declared the monrg code and made If statments relating the month and its code, and wrote else in the end, incase the spelling isnt right and added return so that the code would exit quickly if it found a mistake
    if (Month == "January")
    { MonthCode=1;
    }
    else if (Month == "February")
    { MonthCode=4;
    }
    else if (Month == "March")
    { MonthCode=4;
    }
    else if (Month == "April")
    {MonthCode=0;
    }
    else if (Month == "May")
    { MonthCode=2;
    }
    else if (Month == "June")
    { MonthCode=5;
    }
    else if (Month == "July")
    {MonthCode=0;
    }
    else if (Month == "August")
    {MonthCode=3;
    }
    else if (Month == "September")
    {MonthCode=6;
    }
    else if (Month == "October")
    {MonthCode=1;
    }
    else if (Month == "November")
    {MonthCode=4;
    }
    else if (Month == "December")
    {MonthCode=6;
        }
    else {cout <<"Invalid month!"  << endl;
        return(1);}
    
//to make sure the days are between 1-31 and the years are not negative, I made an if statement that exits quickly if the input isnt in that range
    if  ( Day >= 1 && Day <= 31 )
    {
 
    }
    else {cout <<"Invalid day!" << endl;
        return(1);}
    
    if ( Year >= 1 &&  Year <= 3000 ) {
        
    }
    else {cout <<"Invalid year!" << endl;
        return(1);}
  
    //leap year
    if (Month=="January" && Year%4==0){
         if ( Year%400==0 || Year%100!=0) {
        MonthCode=0;}
        
    }
    if (Month=="February" && Year%4==0){
        if ( Year%400==0 || Year%100!=0) {
        MonthCode=3;}
    }
    int DayCode= (CenturyCode + Day + YearCode + MonthCode) %7;

    //I declared the day of the week and assigned values of day names for every daycode
    string DayOfTheWeek=" ";
    if (DayCode==0){
        DayOfTheWeek= "Sunday";
    }
    if (DayCode==1|| DayCode==-6){
        DayOfTheWeek= "Monday";
    }
    if (DayCode==2||DayCode==-5){
        DayOfTheWeek= "Tuesday";
    }
    if (DayCode==3||DayCode==-4){
        DayOfTheWeek= "Wednesday";
    }
    if (DayCode==4||DayCode==-3){
        DayOfTheWeek= "Thursday";
    }
    if (DayCode==5||DayCode==-2){
        DayOfTheWeek= "Friday";
    }
    if (DayCode==6||DayCode==-1){
        DayOfTheWeek= "Saturday";
    }
// finally, after all of these calculations, the program will output Month Day, Year was a DayofTheWeek! For example, June 6, 2002 was a Thursday!
    cout << Month;
    cout << " ";
    cout<< Day;
    cout << ", ";
    cout << Year;
    cout << " was a ";
    cout << DayOfTheWeek;
    cout <<"!" << endl;
    

    return( 0 );
}

