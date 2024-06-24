/*
//BAI 1
#include<iostream>
#include<iomanip>
using namespace std;
struct qlct{
    char mact[10];
    char tenct[20];
    int tuoi;
    int sohc;
    int thuong;
};
void nhap(qlct ct[],int n){
    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Ma cau thu: ";
        cin.getline(ct[i].mact,10);
        cout<<"Ten cau thu: ";
        cin.getline(ct[i].tenct, 20);
        fflush(stdin);
        cout<<"Tuoi: ";
        cin>>ct[i].tuoi;
        cout<<"So huy chuong: ";
        cin>>ct[i].sohc;
    }
}
void tieude(){
    cout<<"_____________________________Quan Ly Cau Thu Doi Bong____________________________"<<endl;
    cout<<setw(11)<<"MA C.THU "
        <<setw(21)<<"TEN C.THU"
        <<setw(11)<<"TUOI"
        <<setw(15)<<"SO HUY CHUONG"
        <<setw(15)<<"THUONG"<<endl;
}
void xuat(qlct ct[],int n){
    for(int i=0;i<n;i++){
        cout<<setw(11)<<ct[i].mact
        <<setw(21)<<ct[i].tenct
        <<setw(11)<<ct[i].tuoi
        <<setw(15)<<ct[i].sohc
        <<setw(15)<<ct[i].thuong<<endl;
    }
}
void tinhthuong(qlct ct[],int n){
    for(int i=0;i<n;i++){
        if(ct[i].sohc > 5){
            ct[i].thuong=500000;
        }
        else if(ct[i].sohc>3){
            ct[i].thuong=300000;
        }
        else if(ct[i].sohc>2){
            ct[i].thuong=200000;
        }
    }
    xuat(ct, n);
}
void sapxep(qlct ct[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ct[i].tuoi<ct[j].tuoi){
                swap(ct[i], ct[j]);
            }
        }
    }
    xuat(ct, n);
}
int main(){
    int n;
    do
    {
        cout << "Nhap so luong cau thu: ";
        cin >> n;
         if(n<=0)
        {
            cout << "\nNhap thong tin sai , Nhap lai !" << endl;
        }
    }while (n <=0);
    cout << "nhap thong tin cau thu "<<endl;
    qlct ct[n];
    nhap(ct,n);
    tieude();
    tinhthuong(ct,n);
    xuat(ct,n);
    cout<<"Sap xep cau thu theo tuoi "<<endl;
    tieude();
    sapxep(ct,n);
}
*/
// Bài 2
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int n;
    cout<<"nhap n: ";
    cin>>n;
    int a[n];
    fstream infile;
    infile.open("vao.txt");
    cout << "Nhap du lieu toi file vao.txt!" << endl;
    for(int i = 0 ; i < n; i++)
    {
        cin>>a[i];
        fflush(stdin);
        infile << a[i] << endl;
    }
    infile.close();
    fstream outfile;
    outfile.open("vao.txt");
    cout << "_________________________________"<<endl;
    cout << "Doc du lieu co trong file vao.txt!" << endl;
    for(int i = 0; i < n ; i++)
    {
        cout<<a[i]<<endl;
    }
    outfile.close();
    fstream luufile;
    luufile.open("luu.txt");
    cout << "Ghi du lieu toi file luu.txt!" << endl;
    for(int i = 0 ; i < n ; i++)
    {
        int sum = 0;
        for(int j = 1; j < a[i]; j++)
        {
            if(a[i] % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum == a[i])
        {
            cout<<a[i]<<endl;
        }
    }
    cout<<"_______________________________________"<<endl;
    cout<<"Mang sau khi duoc sap xep: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
        for(int i = 0 ; i < n ; i++)
    {
        cout<<"a["<<i<<"] : "<<a[i]<<endl;
    }
    luufile.close();
}

