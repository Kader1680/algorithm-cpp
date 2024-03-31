using namespace std;
#include <iostream>
#include <algorithm>

int main()
{
    // 5 2 8 5 6
    int numbers, arr[100], mini, index;
    cout<<"enter the number of the element : ";
    cin>>numbers;
    for(int i=0; i<numbers; i++){
        cin>>arr[i];
    }
    for(int i=0; i<numbers; i++){
        mini = arr[i], index = i;
        for(int j=i+1; j<numbers; j++){
            if(arr[j] < mini){
                mini = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
    
    for(int i=0; i<numbers; i++){
        cout<<arr[i];
    }    
    return 0;
}
