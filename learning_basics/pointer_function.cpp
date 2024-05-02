#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//function
void print_arr(int* value, int n=2){
    for (int i=0;i<n;i++){
        cout<<value[i]<<"\t"<<endl;
    }
    cout<<*value<<endl;
}

int swap_sum(int &x,int &y){
    int z=x;
    x=y;
    y=z;
    cout << "x - "<<x <<" y- "<<y<<endl;
    return x+y;
}

int main(){

    //refernce and pointer
    string food = "Pizza";
    string &meal = food;

    cout << food<<endl;
    cout<<meal<<endl;

    string* ptr = &food;
    cout<<"Food memory address value - " <<&food <<" Pointer value - " << ptr<<endl;

    //dereference operator
    cout<<"Drefrence value of the pointer - "<<*ptr<<endl;
    *ptr = "Hamburger";
    cout<< "Food - " << food<< " Pointer value - " << *ptr<<endl;

    //calling function
    int array[5] = {1,2,3,4,5};
    print_arr(array, 6);
    int arr_num[] ={20,30};
    //use the default parameter value for n = 2, also called optional parameter
    print_arr(arr_num);

    int num1 =10, num2=20;
    int sum = swap_sum(num1, num2);
    cout<<"Sum - " <<sum<<endl;

    return 0;
}
