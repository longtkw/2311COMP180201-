#include <iostream>
#include <cmath>
using namespace std;
// Dinh nghia cau truc
struct Toado{
float x;
float y;
};
float Tinhdodai (Toado a, Toado b){
return sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));;
}

 int main()
 //Khai bao cau truc
 {

Toado A,B,C;
//Truy cap cac thanh phan cau truc
cout<<"Nhap vao toa do diem A:"; cin>>A.x>>A.y;
cout<<"Nhap vao toa do diem B:"; cin>>B.x>>B.y;
cout<<"Nhap vao toa do diem C:"; cin>>C.x>>C.y;
//Truyen cau truc do vao ham
cout<<"\nDo dai canh AB="<<Tinhdodai(A,B);
cout<<"\nDo dai canh AC="<<Tinhdodai(A,C);
cout<<"\nDo dai canh BC="<<Tinhdodai(B,C);
return 0;
}