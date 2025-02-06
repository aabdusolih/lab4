#include <iostream>
using namespace std;

/*  problem 1
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Number is negative" << endl;
    }
    else if (num > 0) {
        cout << "Number is positive" << endl;
    }
    return 0;
}*/

/*  problem 2
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int remainder = number % 2;
    if (remainder) {
        cout << number << " is odd number" << endl;
    }
    else {
        cout << number << " is even number" << endl;
    }
    return 0;
}*/

/*  problem 3
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > num2) {
        cout << "The largest number is: " << num1 << endl;
    }
    else if (num1 < num2) {
        cout << "The largest number is: " << num2 << endl;
    }
    return 0;
}*/

/*  problem 4
int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2) {
        if (num2 > num3) {
            cout << num1 << "is the greatest number." << endl;
        }
        else {
            if (num3 > num1) {
                cout << num3 << " is the greatest number." << endl;
            }
        }
    }
    else if (num1 < num2) {
        if (num2 > num3) {
            cout << num2 << " is the greatest number." << endl;
        }
        else {
            cout << num3 << " is the greatest number." << endl;
        }
    }
    return 0;
}*/

/*  problem 5
int main() {
    int year;
    cout<<"Enter Year: ";
    cin>>year;
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        cout<<"Year is a leap year";
    }
    else {
        cout<<"Year is not a leap year";
    }
    return 0;
}*/

/*  problem 6
int main() {
    int speed;
    cout << "Please enter the speed: ";
    cin >> speed;
    if (speed < 20) {
        cout << "Too slow." << endl;
    }
    else if (speed > 80) {
        cout << "Too fast." << endl;
    }
    else {
        cout << "Just right" << endl;
    }
    return 0;
}*/

/* problem 7
int main() {
    double mark;
    cout << "Please enter your mark: ";
    cin >> mark;
    if (mark >= 50) {
        cout << "Pass" << endl;
    }
    else {
        cout << "Fail" << endl;
    }
    return 0;
}*/

/* problem 8
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number < 0) {
        cout << "Number is negative" << endl;
    }
    else if (number == 0) {
        cout << "Number is zero" << endl;
    }
    else {
        cout << "Number is positive" << endl;
    }
    return 0;
}*/

/*  problem 9
int main() {
    string color;
    cout << "Please enter the color: ";
    cin >> color;
    if (color == "r") {
        cout << "Stop." << endl;
    }
    else if (color == "g") {
        cout << "Go!" << endl;
    }
    else if (color == "y") {
        cout << "Get ready!" << endl;
    }
    return 0;
}*/

/*  problem 10
int main() {
    double grade;
    cout << "Please enter your grade: ";
    cin >> grade;
    if (grade >= 90) {
        cout << "Grade is A" << endl;
    }
    else if (grade >= 80) {
        cout << "Grade is B" << endl;
    }
    else if (grade >= 70) {
        cout << "Grade is C" << endl;
    }
    else if (grade >= 60) {
        cout << "Grade is D" << endl;
    }
    else {
        cout << "Grade is F" << endl;
    }
    return 0;
}*/

/*  problem 11
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if (num1 > num2) {
        if ((num1 % num2) == 0) {
            cout << num1 << " is divisible by " << num2 << endl;
        }
        else {
            cout << num1 << " is not divisible by " << num2 << endl;
        }
    }
    else {
        cout << num1 << " is not divisible by " << num2 << endl;
    }
    return 0;
}*/

/*  problem 12
int main() {
    double angle1, angle2, angle3;
    cout << "Enter angles: ";
    cin >> angle1 >> angle2 >> angle3;
    double angleSum = angle1 + angle2 + angle3;
    if (angleSum == 180) {
        cout << "The triangle is valid." << endl;
    }
    else {
        cout << "The triangle is not valid." << endl;
    }
    return 0;
}*/

int main() {
    string char;
    cout << "Please enter a character: ";
    cin >> char;

}