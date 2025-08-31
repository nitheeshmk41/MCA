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
    int key;
    cout << "\nEnter key to rotate the array : ";
    cin>> key;
    key = key % arr.size();
    vector<int> temp;

    for(int i = key;i < arr.size();i++){
        temp.push_back(arr[i]);
    }
    for(int i = 0;i < key ; i++){
        temp.push_back(arr[i]);
    }
    cout << "After rotation !\n";
    for(int a : temp){
        cout << a << " ";
    }

    return 0;
}
