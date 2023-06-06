/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*     Welcome To My Project!!!!!
               WEATHER APP
Name: YASHNI.B

Methods:
Class& objects
if else statements
switch case
*/
#include <iostream>
using namespace std;
class climate{
    public:
    int w,choose;
    string location,c1="rainy zone",c2="desert zone",c3="humidity zone";
    int getdata(){
        cout<<"\nWelcome to WEATHER APP!!!";
        cout<<"\nEnter the location\nrainy\ndesert\nhumidity";
        cin>>location;
        return 0;
    }
};
class yesterday:public climate
{
    public:
    int data1(){
        cout<<"\nyesterday report is here!!!\n";
    if(w=location.compare(c1)){
        cout<<"temp 20°C\nrainfall\ncool!! ";
    }
    else if(w=location.compare(c2)){
        cout<<"temp 37°C\nHeat waves\ndry!!";
    }
    else if(w=location.compare(c3)){
        cout<<"temp 25°C\nwater vapor\nmonsoon wind!!";
    }
    else{
        cout<<"you're in out of station!!";
    }
    return 0;
    }
};
class today:public climate{
    public:
    int data2(){
        cout<<"\n Today report is here!!!\n";
    if(w=location.compare(c1)){
        cout<<"\ntemp 22°C\n rainfall";
    }
    else if(w=location.compare(c2)){
        cout<<"\ntemp 38°C\nToo Hot\ndry!!!";
    }
    else if(w=location.compare(c3)){
        cout<<"\ntemp 28°C\ncloudy vapor!!!";
    }
    else{
        cout<<"you're in out of station!!! ";
    }
    return 0;
    }
};
class tomorrow:public climate{
    public:
    int data3(){
        cout<<"\n tomorrow report is here!!!";
    if(w=location.compare(c1)){
        cout<<"\ntemp 25°C\ncloudy\nthunderstorm!!!";
    }
    else if(w=location.compare(c2)){
        cout<<"\ntemp 41°C\nToo hot\nheat waves!!!";
    }
    else if(w=location.compare(c3)){
        cout<<"\ntemp 24°C\nhumidity wind!!!";
    }
    return 0;
    }
};
class weekly:public climate{
    public:
    int data4(){
        cout<<"\n weely report is here!!!\n choose the day in a week(1-6):";
        cin>>choose;
    switch(choose){
    case 1:cout<<"\nMonday\ncloudy!!!";
    break;
    case 2:cout<<"\nTuesday\nsunny!!!";
    break;
    case 3:cout<<"\nWednesday\nhumidity!!!";
    break;
    case 4:cout<<"\nThursday\nbreeze!!!";
    break;
    case 5:cout<<"\nFriday\nsoo hot!!!";
    break;
    case 6:cout<<"\nsaturday\nmonsoon wind!!!";
    break;
    default:cout<<"\nsunday\nrainy!!!!";
    break;
    
    }
    return 0;
    }
};

int main()
{
    climate w1;
    yesterday y1;
    today t1;
    tomorrow tw;
    weekly w2;
    w1.getdata();
    y1.data1();
    t1.data2();
    tw.data3();
    w2.data4();
    
    return 0;
}