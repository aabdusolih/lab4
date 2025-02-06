#include <iostream>
#include <cctype>
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


/* problem 13
int main() {
    string input;
    cout << "Please enter a character: ";
    cin >> input;
    if (islower(input[0])) {
        cout << input << " is a lowercase letter." << endl;
    }
    else if (isupper(input[0])) {
        cout << input << " is a uppercase letter." << endl;
    }
    else {
        cout << input << " is not in the alphabet." << endl;
    }
    return 0;
}*/

/*  problem 14
int main() {
    double w1, w2, p1, p2, cost1, cost2;
    cout << "Please enter the weight and price of package 1: " ;
    cin >> w1 >> p1;
    cout << "Please enter the weight and price of package 2: " ;
    cin >> w2 >> p2;
    cost1 = w1/p1;
    cost2 = w2/p2;
    if (cost1 < cost2) {
        cout << "Package 2 has a better price." << endl;
    }
    else if (cost1 > cost2) {
        cout << "Package 1 has a better price." << endl;
    }
    else {
        cout << "They have the same price." << endl;
    }
    return 0;
}*/

/*  problem 15
int main() {
    int num;
    cout << "Enter a three digit number: ";
    cin >> num;
    int char1 = num/100;
    int char3 = num%10;
    if (char1 == char3) {
        cout << "The number is a palindrome." << endl;
    }
    else {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}*/

/*  problem 16
int main() {
    int x, y;
    cout << "Enter the coordinates: ";
    cin >> x >> y;
    double rad = x*x + y*y;
    if (rad <= 100) {
        cout << "The point is in the circle." << endl;
    }
    else {
        cout << "The point is out of the circle." << endl;
    }
    return 0;
}*/


/*int main() {
    double gpa;
    cout << "Enter GPA: ";
    cin >> gpa;
    int x = gpa*10;
    switch (x) {
        case 40 ... 45: {
            cout << "You got 80% scholarship" << endl;
        }
        break;
        case 35 ... 39: {
            cout << "You got 60% scholarship" << endl;
        }
        break;
        case 30 ... 34: {
            cout << "You got 50% scholarship" << endl;
        }
        break;
        default: {
            cout << "You got no scholarship" << endl;
        }
        break;
    }
    return 0;
}*/