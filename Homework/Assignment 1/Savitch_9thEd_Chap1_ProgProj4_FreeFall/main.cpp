/* 
 * File:   main.cpp
 * Author: Abanob Wahba
 * Created on February 26, 2017, 2:00 PM
 * Purpose: to calculate the time and how far the object will fall.
 *            
 *           
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float GRAVITY=32.174f;//Gravity on Earth Sea-Level ft/sec^2

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float time,distnce;
    
    //Initialize variables
    time=1.0f;
    
    //Map inputs to outputs or process the data
    distnce=GRAVITY*time*time/2;//Result in ft
    
    //Output the transformed data
    cout<<"Free fall of "<<time<<" secs = "<<distnce<<" ft"<<endl;
    
    //Exit stage right!
    return 0;
}