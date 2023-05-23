/*No 2 Program menerapkan 2 metod
pengurutan beserta contoh pemanggilannya di main
body, dilakukan secara descending
Januar Rizky Adsyamsa
A11.2022.14429/ 4212*/
#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for(i=1; i<n; i++){
        key= arr[i];
        j=i-1;

        for(j=i-1; j>=0 && arr[j]<key; j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]= key;
       }
    }

    void printArray(int arr[], int n)
    {
        for (int i=0; i<n; i++){
            cout<< arr[i] <<" ";
        }
        cout << endl;
    }

    int main()
    {
        int arr[]={4,3,5,1,2,2,1};
        int n= sizeof(arr)/ sizeof(arr[0]);

        insertionSort(arr, n);
        cout<< "Sorted array:\n";
        printArray(arr, n);
}
