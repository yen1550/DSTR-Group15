#include <iostream>
using namespace std;

int main(){

    int speed;
    
    cout << "Please enter your speed: ";
    cin >> speed;

    if(speed > 55){
        cout << "Your ticket is 1";

    } else {
        cout << "Your ticket is 0";
    }


    return 0;

}

/* 
    int firstNum;
    int secondNum;

    firstNum = 18;
    cout << "Line 9: firstNum = " << firstNum << endl;

    cout << "Line 10: Enter an integer:";
    cin >> secondNum;
    cout << endl;

    cout << "Line 13: secondNum = " << secondNum << endl;

    firstNum = firstNum + number + 2 * secondNum;

    cout << "Line 15: The new value of " << "firstNum = " << 
    firstNum << endl; 
    
    //

    CLASS ACTIVITY 1
    int feet;
    
    cout << "Please enter the feet: ";
    cin >> feet;
    cout << "The feet value to inches is: " << feet*12 <<" inches" << endl;
    cout << "The inches value to cm is: " << feet*12*2.54 << " cm" << endl;
    
    //

    CLASS ACTIVITY 2 - Q1
    
    int x = 0, y;

    cout << "Enter value for y: ";
    cin >> y;

    if(y > 0){
        x = 1;
    }

    cout << x;

    //

    Q2
    double score = 0;

    cout << "Enter your score: ";
    cin >> score;

    if(score>= 80 && score <= 90){
        score += 5;
    }

    cout << "Score after modify: " << score;
    
    return 0;

    // 
    Q3

    int x = 0;
    cout << "Please enter a number: ";
    cin >> x;

    if(x % 2 != 0 && x > 0){
        cout << "True";

    }else{
        cout << "False";
    }
    
    // 
    Q4

    int x=0,y=0;
    cout << "Please enter a number for x: ";
    cin >> x;
    cout << "Please enter a number for y: ";
    cin >> y;

    if(x>0 && y>0){
        cout << "True";
    } else{
        cout << "False";
    }

    */