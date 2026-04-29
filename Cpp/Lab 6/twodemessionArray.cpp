#include <iostream>
using namespace std;

int main()
{
    int side1;
    int side2;
    double values;


    cout << "Enter the dimensions of the Array(Must be at most 3): " << endl;
    cin >> side1 >> side2;

    if(cin.fail()){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "invalid input enter double values" << endl;
    }
    else if(side1 >3 || side2 >3){
        cout << " invalid!! Input \n should be at MOST 3 " << endl;
    }
    else{
        double* dynamicArray = new double[side1 * side2];
        
            cout << "Enter the value for the array: "<< endl;
        for(int i= 0; i < side1; i++){
            for(int j = 0; j < side2 ; j++){
                cin >> values;
                dynamicArray[i * side2 + j] = values;
            }
        }

        cout << "these are values in the array: "<< endl;
        for(int i = 0; i < side1; i++){
            for(int j = 0; j < side2 ; j++){
                                cout <<  dynamicArray[i*side2 + j] << endl;
            }
        }

        delete[] dynamicArray;
    }

    return 0;
}
