#include <iostream>
#include <vector>


using namespace std;
void Vienodi(vector<int>&arr1, vector<int>&arr2,vector<int>&arr3);
void Nevienodi (vector<int>&arr1,vector<int>&arr3);
void Spausdinti (vector<int>&arr3);
int main() {
    vector <int> arr2 = {2,1,4,3,9,6};
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int>arr3;
    bool True = 1;
    if(1<= arr1.size() && arr2.size() <= 1000){
        for (int i = 0; i < arr1.size(); ++i) {
            if(arr1[i] < -1) True = 0;
        }
        for (int i = 0; i < arr2.size(); ++i) {
            if(arr2[i] > 1000) True = 0;
        }
    }
    if(True == 1) {
        Vienodi(arr1, arr2, arr3);
        Nevienodi(arr1, arr3);
        Spausdinti(arr3);
    }
    else cout << "Neatitinka reikalavimu duomenys";
    return 0;
}
void Vienodi(vector<int>&arr1, vector<int>&arr2,vector<int>&arr3){
    int narr2 = arr2.size();
    int darr1 = arr1.size();
    for(int i = 0; i < narr2; i++) {
        for (int j = 0; j < darr1; j++) {
                if (arr2[i] == arr1[j]) {
                    arr3.push_back(arr1[j]);
                    arr1[j] = -1;
                }
        }
    }
}
void Nevienodi (vector<int>&arr1,vector<int>&arr3){
    for(int i = 0; i < arr1.size();i++){
        if(arr1[i] != -1){
            arr3.push_back(arr1[i]);
        }
    }

}
void Spausdinti (vector<int>&arr3){
    for(int i : arr3){
        cout << i << " ";
    }
}