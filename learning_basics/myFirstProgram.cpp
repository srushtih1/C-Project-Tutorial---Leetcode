#include <iostream>
#include <string> //without this as well it will compile and execute
#include <cmath>
using namespace std;

int main(){
    cout<< "Hello World!\t";
    cout<< "Srushti here"<< endl;

    //Data types & Variables *******************
	int number = 1234;
    float decimal_number = 1234.6789;
    double value = 123.23247354589;
 	char single_char = 'B'; 
    //ascii values for A,B,C
	char a = 65, b=66, c=67;
    string text = "Welcome srushti";
    bool flag = true;
    
    cout << "Bye...My variables-\n\n";
    cout<<"Integer - " << number << endl;
    cout<<"float - " <<decimal_number << endl;
    cout<<"Double - " <<value << endl;
    cout<<"char_single - " <<single_char << endl;
    cout<< "Char Ascii values - " <<a<<b<<c << endl;
    cout<<"string - " <<text << endl;
    cout<<"boolean - " <<flag << endl;

    //Constant keyword for variables **************
    const string date = "3rd April 2024";
    cout<<"Constant value - " <<date <<endl;
    
    //User input -- CIN ***************
    int user_input;
    cout<<"Enter the user input value - ";
    cin>> user_input;
    cout<<"The user input value - " << user_input << endl; //here if the user enters a letter, it still stores only the number value
    //to get whole input line- user getline method
    string user_in_st;
    cout<<"Enter the user input string - ";
    getline(cin, user_in_st);
    cout<<"The user input value string- " << user_in_st << endl;

    
    //Operators ***************
    int x=10, y=20;
    
    //arithematic operators
    cout<<x+y<<"\t" <<x-y<<"\t" <<x*y<<"\t" <<x/y<<"\t" <<x%y<<"\t" <<++x<<"\t" <<--y<<endl;
    
    //assignment operators
    x+=3; y-=5;
    cout<<x<<"\t" <<y<<"\t" <<endl;
    x*=2;  y/=7; y%=2;
    cout<<x<<"\t" <<y<<"\t" <<endl;
    x^=2; //bitwise XOR assignment operator
    cout<<x<<"\t"<<endl;
    x&=2;  //bitwise AND assignment operator
    y|=0;  //bitwise OR assignment operator
    x>>=2; y<<=0; //right shift and left shift assignment operator
    cout<<x<<"\t" <<y<<"\t" <<endl;

    //comparison operators
    int num1 = 20, num2 = 30;
    if (num1 == num2){
        cout << "Both are equal."<<endl;
    }else if(num1 != num2){
        cout << "They are not equal."<<endl;
    } 
    if(num1 >= num2){
        cout << "Num1 is greater."<<endl;
    }else if(num1 <= num2){
        cout << "Num1 is smaller."<<endl;
    }else{
        cout << "Matched..Freaky!";
    }

    //logical operators - &&, ||, !
    cout << (num1>=20 && num2==30); //returns false if both conditions not true
    cout << (num1<20 || num2==30); // anyone true, it will return true
    cout << !(num1<20 && num2==30)<<endl; //value returned inside the bracket is reversed

    //String functions and accessing ********************
    string name = "Srushti ", lastname = "Hembade";

    //concatenation - two ways + and append()
    cout << name + lastname << endl;
    cout << name + ' ' + lastname <<endl;
    cout << name.append(lastname)<<endl;

    //+ operator with numbers and strings -
    cout << "Number + = " << num1+num2<<endl;
    string no="10", no2="20";
    cout<<"Strings \"+\" = "<< no+no2 <<endl;
    cout<< "size of the string - " << name.size()<<endl;
    cout<< "length of the string - " << name.length()<<endl;

    //accessing characters in a string using []
    cout<< "Accessing the string element with index - " << name[0]<<endl;//accessing first character

    //cmath operators
    int num_cmath = 512;
    cout << "Square root - " << sqrt(num_cmath)<<endl;
    cout << "cubic root - " << cbrt(num_cmath)<<endl;
    cout << "Power of 2 to 3 - " << pow(2,3)<< endl;
    
    //loops - 
    int lab1=10, lab2=15;
    if (lab1<lab2){ 
        cout<< "b is greater"<< endl;
    }else if(lab1==lab2){
        cout << "a is equal to b"<< endl;
    }else{
        cout << "a is greater"<< endl;
    }

    cout<< "Max method - " << max(lab1, lab2) <<endl;
    cout<< "Min method - "<< min(lab1, lab2)<< endl;

    //short hand if-else 
    string result = (lab1<lab2) ? "b is greater" : "a is greater";
    cout <<result<<endl;

    //switch statement 
    int day = 4;
    switch(day){
        case 1:
        cout<< "Monday";
        break;
        case 2:
        cout<< "Tuesday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout<< "Thursday"<<endl;
        break;
        default:
        cout<< "no case day";
    }

    //while loop
    int counter = 0;
    while(lab1 <= lab2){
        cout<< "While iteration count - " << counter++ <<endl;
        lab1++;
    }

    //do while loop
    do {
        cout<< " Do While iteration count - " << counter++ <<endl;
        lab1++;
    }while (lab1<lab2); //it will execute once even if condition fails here (15=15)

    //for loop
    for(int i=0; i<5; i++){
        cout<<"for iteration count - " << i<<endl;
    }

    //nested for loop - 
    for(int i=0; i<5; i++){
        cout<<"outer for iteration count - " << i<< endl;
        for (int j=0; j<2; j++){
            cout<<"inner for iteration count - " << j;
        }
    }

    //for each loop - array traversal
    int arr[3] = {10, 20, 30};
    for(int item : arr){
        if (item == 10){
            cout<<"break the loop";
            break;
        }
        cout<< "Array for break item - " << item << "\t" << endl;
    }

    for(int item : arr){
        if (item == 10){
            cout<<"skip for 10";
            continue;
        }
        cout<< "Array for continue item - " << item << "\t" << endl;
    }

	return 0;
}