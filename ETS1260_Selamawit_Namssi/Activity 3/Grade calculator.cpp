#include <iostream>
using namespace std;
int main(){
    int number_of_people;
    cout<<"Enter the number of person you want to calculate: ";
    cin>>number_of_people;
    for(int i=1;i<=number_of_people;i++){
        double test,quiz,assignment,project,final_exam,mark;
        cout << "\nPerson " << i << ":\n";

        cout << "Enter your test score (0-15): ";
        cin >> test;
        cout << "Enter your quiz score (0-5): ";
        cin >> quiz;
        cout << "Enter your assignment score (0-10): ";
        cin >> assignment;
        cout << "Enter your project score (0-20): ";
        cin >> project;
        cout << "Enter your final exam score (0-50): ";
        cin >> final_exam;

    if((test ==0 && test==20) || (quiz==0 && quiz ==5) || (assignment==0 && assignment == 10) || (project==0 && project ==20)  || (final_exam==0 && final_exam ==50)){
        mark = test + quiz + assignment + project + final_exam;
        cout<<"Your mark from out of 100 is "<<mark<<endl;
    if (mark >=90){
        cout<<"Grade: A+"<<endl;
            }
    else if (mark >=80){
        cout<<"Grade: A"<<endl;
            }
    else if (mark >=75){
        cout<<"Grade: B+"<<endl;
            }
    else if (mark >=60){
        cout<<"Grade: B"<<endl;
            }
    else if (mark >=55){
        cout<<"Grade: c+"<<endl;
            }
    else if (mark >=45){
        cout<<"Grade: c"<<endl;
            }
    else if (mark >=30){
        cout<<"Grade: D"<<endl;
            }
    else{
        cout<<"Grade: F"<<endl;
            }
    

        }
        cout<<endl;
    }
    return 0;
}
