#include<iostream>
#include<vector>
using namespace std;

bool checkEmpty(vector <int> &v){
    return v.empty();
}

vector<int> findIndices(vector <int> &v, int key){
    vector<int> indices;
    for(int i = 0; i < v.size();i++){
        if(v[i] == key){
            indices.push_back(i);
        }
    }
    return indices;
}


void printIndices(const vector<int> &v){
    if(v.size() != 0){
        for(int i = 0;i < v.size();i++){
        cout << v[i] << endl;
        }
    } 
        else{
            cout << "Key not found!" << endl;
        }
}

int main(){
    vector<int> arr1 = {1,3,4,3,2,4,3,2,3,2};
    vector<int> arr2;

    cout << "Case 1: Multiple occurences [Let key = 2]" << endl;
    if(!checkEmpty(arr1)){
        printIndices(findIndices(arr1, 2));
    }
    else{
        cout << "Array is empty!" << endl;
    }

    cout << endl;

    cout << "Case 2: Key not present [Let key = 5]" << endl;
    if(!checkEmpty(arr1)){
        printIndices(findIndices(arr1, 5));
    }
    else{
        cout << "Array is empty!" << endl;
    }

    cout << endl;

    cout << "Case 3: Empty array [Let key = 2]" << endl;
    if(!checkEmpty(arr2)){
        printIndices(findIndices(arr2, 2));
    }
    else{
        cout << "Array is empty!" << endl;
    }

}