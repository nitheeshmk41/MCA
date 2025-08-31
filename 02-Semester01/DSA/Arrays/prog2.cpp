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
        cout << "Not able sort the array \n";
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
    char user_input;
    cout << "Want to sort in ascending (a) or descending (d) : ";
    cin >> user_input;
    if(user_input != 'a' && user_input != 'd'){
        cout << "Enter valid input !!";
    }
    else{
        if(user_input == 'a'){
             sort(arr.begin(),arr.end());
        }else{
            sort(arr.begin(),arr.end(),greater<int>());
        }
    }

    for(int a : arr){
        cout << a << " ";
    }
    return 0;
}
