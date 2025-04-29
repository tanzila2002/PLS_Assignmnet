#include <iostream>
using namespace std;

int main() {
    int capacity = 2;  
    int size = 0;      
    int* arr = new int[capacity]; 

    
    for (int i = 0; i < 5; ++i) {
        if (size == capacity) {
            
            capacity *= 2;
            int* newArr = new int[capacity];
            
           
            for (int j = 0; j < size; ++j)
                newArr[j] = arr[j];
           
            delete[] arr;
            arr = newArr;
            
            cout << "Resized to capacity: " << capacity << endl;
        }
        arr[size++] = i + 1;  
    }

   
    cout << "Final array: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;

 
    delete[] arr;
    return 0;
}