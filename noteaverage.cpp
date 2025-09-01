#include<iostream>
using namespace std;

int main()
{

    int note1,note2,note3,note4,note5,average;
    cout<<"1. Enter Your Grade: ";
    cin>>note1;

    cout<<"2. Enter Your Grade: ";
    cin>>note2;

    cout<<"3. Enter Your Grade: ";
    cin>>note3;

    cout<<"4. Enter Your Grade: ";
    cin>>note4;

    cout<<"5. Enter Your Grade: ";
    cin>>note5;

    cout<<"\n";

     /* Grade Rates, if you want to change...
     */
    average = (note1 * 0.20) + (note2 * 0.20) + (note3 * 0.20) + (note4 * 0.20) + (note5 * 0.20);
    cout<<"Note Average: " << average;


    return 0;
}
