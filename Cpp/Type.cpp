#include <iostream>
using namespace std;

int main(){
    // declearing 2nd array of subject vs its credit
    string arr[2][6]= {{"ENG","CHEM","PHY","MATH","COM","BIO"},{" "," "," "," "," "," "}};

    for(int i = 0;i < 2;i++){
        for(int j = 0; j < 6;j++){
            cout << arr[i][j] << endl;
        }

    }
    return 0;

}
