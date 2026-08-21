#include<iostream>
using namespace std;

int main(){
    int matrix[3][3],sum=0;

    cout <<"enter the matrix elements : " << endl;
    for(int i=0;i<3;i++){       //for rows
        for(int j=0;j<3;j++){   //for coloumns
            cin >> matrix[i][j];
        }
    }

    cout << "entered elements are: " << endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << matrix[i][j] << " ";
            sum=sum+matrix[i][j];
        }
        cout << endl;
    }

    cout <<"the sum of entered elements is: " << sum;
    return 0;
}