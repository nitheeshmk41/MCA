#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr;
    int n = 0;
    cout << "Enter the length of the arr : ";
    cin >> n;

    if(n < 2){
        cout << "Not able find second largest element (less than 2 elements ) in array \n";
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

    int maxi = arr[0];
    int s_maxi;
    for(int i : arr){
        cout << i << " ";
        if(i > maxi){
            s_maxi = maxi;
            maxi = i;
        }
    }
    cout << "\nSecond maximum element -> " << s_maxi << '\n';

    return 0;
}
