#include<iostream>
using namespace std;

int christmasTree(int n, int space){
    int i,j,k;
    for(i=1; i<=n; i++){
        k=n-i+space;
        while(k!=0){
        cout<<"  ";
        k--; }
    for(j=1; j<=i*2-1; j++){
        cout<<"* "; }
        cout<<endl;}
}

int main() {
    int i,n,k,l=2;
    cout<<"Enter the number of tree levels  content ";
    cin>>n;
    while(l<=n+1){
        k=n-l+1;
        christmasTree(l,k);
        l++;}

    for(i=1;i<n;i++){
        k=n*2-1;
        while(k!=0){
        cout<<" ";
        k--;}

    cout<<"| |"<<endl;}

    return 0;
}
