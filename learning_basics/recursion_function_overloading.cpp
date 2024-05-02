#include <iostream>
#include <string>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;

//overloading of the function - same name with different type of parameters
int plusFunc(int x, int y){
    return x+y;
}
double plusFunc(double x, double y){
    return x+y;
}

string plusFunc(string name){
    cout <<name<<endl;
    return name+"10";
}

//recursion used method for sum of k numbers
int recur_sum(int k){
    if(k>0){
        cout<<k<<" -- recur_sum("<<k-1<<")"<<endl;
        return k + recur_sum(k-1);
    }else{
        return 0;
    }
}

//iterative fibonacci series - 0,1,1,2,3,5,8,13,21...
int fibonacci_linear(int k){
    int a=0,b=1,c;
    if(k==0) {return 0;}
    else if(k==1){ return 1;}
    else{
        for(int i=2; i<=k;i++){
            c=a+b;
            a=b;
            b=c;
            //cout<<c<<endl;
        }
        cout<<"Final output - "<<c<<endl;
        return c;
    }
}

//recursive fibonacci series -- more time that linear, more memory overhead
int fibo_recur(int k){
    if(k==0){ return 0;}
    else if(k==1){return 1;}
    else {
        //cout<<"fibo( " <<k-1<<")"<<" + fibo("<<k-2<<")"<<endl;
        return fibo_recur(k-1) + fibo_recur(k-2);
    }
}


int main(){
    
    int sum_int = plusFunc(10,33);
    double sum_double = plusFunc(1.2,3.3);
    string string_con = plusFunc("Srushti");
    cout<<"Sum  of integers: "<<sum_int<<endl;
    cout<<"Sum of doubles: "<<sum_double<<endl;
    cout<<"String overloaded function output: "<<string_con<<endl;

    //recursion problem
    int result = recur_sum(10);
    cout<<"Result of recursive sum - "<<result<<endl;

    //fibonacci linear and recursive call
    auto start = high_resolution_clock::now();
    int output = fibonacci_linear(100);
    cout<<"Result of fibonacci linear - "<<output<<endl;
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop-start);
    cout<<"Execution time for linear method - " <<duration.count() <<" ms"<<endl;

    start = high_resolution_clock::now();
    int recur_op = fibo_recur(100);
    cout<<"Result of fibonacci recursive - "<<recur_op<<endl;

    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop-start);
    cout<<"Execution time for recurive method - " <<duration.count() <<" ms"<<endl;

    return 0;
}