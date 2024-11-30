//This is a program that calculate Body mass index(BMI) and label the BMI as UNDERWEIGHT. NORMAL WEIGHT AND OVERWIEGHT
#include <iostream>

using namespace std;

    string choice =  "yes" ;

    float weight,height,BMI;

        int main(){
            do {
        cout<<"Enter the weight of a person in kilograms"<<endl;
        cin>>weight;

        cout<<"Enter the height of a person in meters"<<endl;
        cin>>height;

             BMI = weight/(height*height);
        cout << "The Body Mass Index(BMI) is : " << BMI << endl;
         {
            if(BMI<18.5){
        cout<<"status = you are UNDERWEIGHT"<<endl;

        } else if (BMI >=18.5 && BMI <= 24.9) {
         cout<<"status = you are NORMAL WEIGHT"<<endl;

        } else {
        cout<<"status = you are OVERWEIGHT"<<endl;

        } cout << "To proceed with the calculation, please indicate your consent by writing yes or pressing any key to terminate the process."<<endl;
        cin>>choice;

          } }
    while(choice == "yes");

 return 0;
 }



