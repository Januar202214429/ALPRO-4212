/*No 1 Prosedur mencetak bilangan genap terkecil
dalam deret bilangan bulat dengan jumlah elemen dinamis
Januar Rizky Adsyamsa
A11.2022.14429/ 4212*/
#include <iostream>

using namespace std;
void genap_ganjil (int arr [], int n) {
    int min_even = -1;
    int min_odd = -1;
    int min_evenindex =-1;
    int min_oddindex =-1;

    for (int i=0; i<n; i++){
        if (arr[i] % 2 != 0){
            if (min_odd == -1 || arr[i] < min_odd) {
                min_odd = arr[i];
                min_oddindex =1;
            }
        }
        else{
            if (min_even == -1 || arr[i] < min_even) {
                min_even = arr[i];
                min_evenindex =1;
        }
    }
}
    cout<< endl << "bilangan terkecil ganjil: " << min_odd << "(index" << min_oddindex <<")" << endl;

    cout<< endl << "bilangan terkecil genap: " << min_even << "(index" << min_evenindex <<")" << endl;
}
int main()
{
    int arr[] = {6,7,4,3,2};
    int n = sizeof (arr)/sizeof(arr[0]);
    genap_ganjil (arr,n);
    return 0;
}
