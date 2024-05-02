#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//method for Battleship game implementation
bool check_winner(int board[5][5]) {

    int hits=0;
    int noOfTurns=0;

    while(hits<4){

        int row=0, col=0;
        cout<<"Please enter the Row you want to hit - "<<endl;
        cin>> row;
        cout<<"Please enter the Column you want to hit - "<<endl;
        cin >>col;

        if(board[row][col]){
            board[row][col] = 0;
            hits++;
            cout<< "Hit !!"<< (4-hits) << "left" << endl;
        }else{
            cout<<"Missed !! Try again."<< (row,col)<<endl;
        }

        noOfTurns++;
    }

    cout<<"Victory!!"<<endl;
    cout<<"Won in "<<noOfTurns<<" steps!!";

    return true;
}

int main(){

    string cars[4] = {"Mazda","Scorpio","Volvo","Audi"};
    //or
    string random[] = {"Harley","Kawasaki"};
    cout<< "Array without size - " << random[6]<<endl;

    // string cars[4]; or int num[] = {10,20,30} can be used as well.
    cout<< "Array access - " << cars[3]<<endl;
    cars[2] = "Benz";
    cout<< "Array change - " << cars[2]<<endl;

    //size of the array
    cout<< "Size of the array in bytes - " << sizeof(cars)<<endl;
    cout<< "Size of the array coverted from  bytes - " << sizeof(cars)/sizeof(string)<<endl;

    //array access with for loop
    for (int i=0; i<sizeof(cars)/sizeof(string); i++){
        cout<<"Cars Index -" <<i<<" --> element - "<< cars[i]<< endl;
    }
    //for each loop
    for(string car : cars){
        cout<< car << endl;
    }

    //multi - dimensianl array
    string letters[2][4] = { {"a","b","c","d"}, {"u","v","w","x"}}; //two dimensional array
    
    string multiarr[2][2][2] = {{{"W","E"},{"S","O"}}, {{"A","S"},{"B","E"}}}; //3-dimensioanl array

    //accessing the array
    cout<< "Multi Array Access - " << multiarr[1][1][1]<<endl;
    letters[0][2] = "wr";
    cout<< "Change letters Array Element - "<<letters[0][2]<<endl;

    //access with loop
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<"letters element - " << i<< j<<"--> "<<letters[i][j]<<endl;
        }
    }

    for(int i=0;i<2;i++){
        for(int k=0;k<2;k++){
            for(int j=0;j<2;j++){
            cout<<"multiarr element - " << i<< k<< j <<"--> "<<multiarr[i][k][j]<<endl;
            }
        }   
    }

    //using for each for multi dimensional array
    for(string let[4] : letters){
        for(string lett : let){
            cout<<"letters element with for each loop - " << lett <<endl;
        }
    }

    for(string mul[2][2] : multiarr){
        for(string mult[2] : mul){
            for (string multi : mult){
                cout<<"letters element with for each loop - " << multi <<endl;
            }
        }
    }

    int batteship[5][5] = {{0,0,0,0,1},
                            {0,1,0,0,1},
                            {1,0,0,0,0},
                            {0,0,0,1,0},
                            {0,0,0,0,1}};

    cout<<"Battleship Game\n"; 
    bool status;
    status = check_winner(batteship);
    cout<<status;

    return 0;
}
