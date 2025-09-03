#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr;
    int n = 0;
    cout << "Enter the length of the arr : ";
    cin >> n;

    if(n < 2){
        cout << "array is very short !! " << "\n";
        return 0;
    }
    else{
        cout << "Enter the values : ";
        for(int i = 0; i< n;i++){
            int value = 0;
            cin >> value;
            arr.push_back(value);
        }
    }
    for(int a : arr){
        cout << a << " ";
    }

    int user_input;
    cout << "\nEnter element to find in is array : ";
    cin >> user_input;

    for(int i = 0;i < arr.size();i++){
        if(arr[i] == user_input){
            cout << "Element found in " << i << "position !" <<'\n';
            return 0;
        }
    }
    cout << "Element not found !!!";


    return 0;
}
