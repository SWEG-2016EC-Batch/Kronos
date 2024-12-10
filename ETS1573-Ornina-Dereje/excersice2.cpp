#include <iostream>
using namespace std;
int main() {
   float test,quiz,project,assignment,finalexam,total_mark;
   label1:
   cout<<"please enter your test result out of 15%: ";
   cin>>test;
   if(cin.fail()||(test>15||test<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct test result."<<endl;
        goto label1;
    }
    label2:
    cout<<"please enter your quiz result out of 5%: ";
   cin>>quiz;
   if(cin.fail()||(quiz>5||quiz<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct quiz result."<<endl;
        goto label2;
    }
    label3:
   cout<<"please enter your project result  out  of 20%: ";
   cin>>project;
   if(cin.fail()||(project>20||project<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct project result."<<endl;
        goto label3;
    }
    label4:
   cout<<"please enter your assignment result out of 10%: ";
   cin>>assignment;
   if(cin.fail()||(assignment>10||assignment<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct assignment result."<<endl;
        goto label4;
    }
    label5:
   cout<<"please enter your final exam result out of 50%: ";
   cin>>finalexam;
   if(cin.fail()||(finalexam>50||finalexam<0))
    {
        cin.clear();
        cin.ignore();
        cout<<"please enter a correct finalexam result."<<endl;
        goto label5;
    }
   total_mark=test+quiz+project+assignment+finalexam;
   cout<<"your total mark out of 100 is:"<<total_mark<<endl;
   if( total_mark<=100 && total_mark>=90 ){
       cout<<"your grade is A+"<<endl;
   }
   else if(total_mark>=80 ){
       cout<<"your grade is A"<<endl;
   }
   else if(total_mark>=75 ){
       cout<<"your grade is B+"<<endl;
   }
    else if(total_mark>=60 ){
       cout<<"your grade is B"<<endl;
   }
    else if(total_mark>=55 ){
       cout<<"your grade is C+"<<endl;
   }
    else if(total_mark>=45 ){
       cout<<"your grade is C"<<endl;
   }
    else if(total_mark>=30 ){
       cout<<"your grade is D"<<endl;
   }
    else if(total_mark<30 ){
       cout<<"your grade is F"<<endl;
   }
   else{
       cout<<"invalid";
   }
   
   
   
   
   
   
   
   
   

    return 0;
}
