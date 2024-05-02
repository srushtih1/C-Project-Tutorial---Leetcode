#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){

    //structure variables.
    struct{
        int model_num;
        string brand;
        double price;
    }mycar;

    mycar.brand = "Audi";
    mycar.model_num = 1111;
    mycar.price =  500000;
    
    cout << "Brand: "<< mycar.brand << endl;
    cout << "Model Number: " << mycar.model_num << endl;    
    cout << "Price: $" << mycar.price << endl;
    
    //multiple variables
    struct{
        int model_num;
        string brand;
        double price;
    }mycar1, mycar2, mycar3;

    mycar2.brand = "Ford";
    mycar2.model_num =  1234;
    mycar2.price = 200000;

    cout << "Brand: "<< mycar2.brand << endl;
    cout << "Model Number: " << mycar2.model_num << endl;    
    cout << "Price: $" << mycar2.price << endl;

    //struct as datatype, names struct
    struct car{
        int  doors;
        bool sunroof;
        string brand;
    };

    car  mybike;
    mybike.brand = "Harley Davidson";
    mybike.doors = 0;
    mybike.sunroof = true;
    //OR
    car  myfourwheeler = {4, false, "Scorpio"};

    cout << "Number of Doors: " << mybike.doors << endl;
    cout << "Sunroof? "<<  (mybike.sunroof ? "True" : "False") << endl;
    cout << "Brand: "<< mybike.brand << endl;
    
    cout <<"Doors - " << myfourwheeler.doors << endl;
    cout <<"Brand - " << myfourwheeler.brand << endl;
    cout <<"Sunroof - " << (myfourwheeler.sunroof ? "True":"False") << endl;
    
    //struct of arrays
    struct arrs{
        int list[5];
        string names[5];
    };

    arrs arr_struct = {{1,2,3,4,5},{"Srushti","Piyush","Ajay","Dhanno","Mrunal"}};
    
    for(string name : arr_struct.names){
        if(name == "Ajay"){
            cout<< "Bravo!!" << name<<endl;
            break;
        }else{
            cout<< name<<endl;
        }
    }
    
    //array of structures
    car cars[3];
    cars[0].doors = 3;
    cars[0].brand = "Tesla";
    cars[1] = mybike;
    cars[2].doors =  6;
    cars[2].brand = "Ferrari";

    for(car c : cars){
        (c.doors > 2) ? cout<< "Vehicle is a Car"<<endl : cout<<" Vehicle is a Bike" <<endl;
        cout<<"brand - " << c.brand << " !!"<<endl;
    }

    //OR

    car list[3] = {{3,false,"Benz"},{4,true,"Mercedes"},{2,true,"Audi"}};

     for(car li : list){
        (li.doors > 2) ? cout<< "Vehicle is a Car"<<endl : cout<<" Vehicle is a Bike" <<endl;
        cout<<"brand - " << li.brand << " !!"<<endl;
    }

    //struct of 2d array
    struct matrix {
        int data[2][2];
        string names [2][2];
    };

    matrix mat1 = {{{2,3},{4,5}}, {{"Sr","Aj"},{"Pk","Dj"}}};
    for (string mt[2] : mat1.names){
        if(mt[1] == "Ajr"){
            cout<<"Found!!!"<<endl;
            break;
        }else{
            cout<< mt[0];
        }
    }

    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            cout<<mat1.names[i][j]<<endl;
        }
    }

    return 0;
}