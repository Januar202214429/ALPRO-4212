#include <iostream>

using namespace std;
int penjumlahan(int x, int y){
    return x+y;
}

int pengurangan(int x, int y){
    return x-y;
}
int totalnilai(int arr[], int n){
    int total=0;
    for(int i=1; i<=n; i++){
        total += arr[i];
    }
    return total;
}
 float ratanilai(int arr[], int n){
    int total=totalnilai(arr, n);
    float rata=(float)total/n;
    return rata;
}
int main()
{
    //1,2
    int a,b,i;
    cout<<"\nMasukkan Nilai a :";
    cin>> a;
    cout<<"\nMasukkan Nilai b :";
    cin>> b;
    cout<<"\n1.Hasil Penjumlahan dari a dan b adalah : "<<penjumlahan(a,b)<<endl;
    cout<<"\n2.Hasil Pengurangan dari a dan b adalah : "<<pengurangan(a,b)<<endl;

    int n;
    cout<<"=====3 dan 4====="<<endl;
    cout<<"berapa baris?";
    cin>>n;
    int arr[n];
        for(int i=1; i<=n; i++){
            cout<<"Masukkan Angka Ke- "<<i<<" : ";
            cin>>arr[i];
    }
    int total=totalnilai(arr, n);
    cout<<"Nilai Total : "<<total<<endl;
    float rata=ratanilai(arr, n);
    cout<<"Rata-rata : "<<rata<<endl;


    return 0;
}
