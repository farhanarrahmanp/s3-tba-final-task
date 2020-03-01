#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;




string record[] =  {"Saya ","Kamu","Dia","Aku","Anda",

                    "main","belajar","makan","tidur","minum",

                    "buku","bola","pensil","motor","mobil",

                    "dikantin","dikampus","dirumah","dikelas","dilab","."};


bool cekS(string record[], string X){
        bool hasil = false;
        int j = 0;
        int k = 0;
        while((j<=4) &&(k<=X.length()+1) && (!hasil)){
            while(k<=X.length()){
                if(record[j][k]==X[k]){
                    k = k+1;
                }else{
                    j = j+1;
                }
            }
        for(j=4;j<=4;j--){
            if(j<=4 and record[j][k]==X[k]){
                hasil = true;
            }
        }
        }
        return hasil;
    }

bool cekP(string record[], string X){
        bool hasil = false;
        int j = 5;
        int k = 0;
        while((j<=9) &&(k<=X.length()+1) && (!hasil)){
            while(k<=X.length()){
                if(record[j][k]==X[k]){
                    k = k+1;
                }else{
                    j = j+1;
                }
            }
        if(j<=9){
            hasil = true;
        }

        }
        return hasil;
    }

bool cekO(string record[], string X){
        bool hasil = false;
        int j = 10;
        int k = 0;
        while((j<=14) &&(k<=X.length()+1) && (!hasil)){
            while(k<=X.length()){
                if(record[j][k]==X[k]){
                    k = k+1;
                }else{
                    j = j+1;
                }
            }
        if(j<=14){
            hasil = true;
        }

        }
        return hasil;
    }

bool cekK(string record[], string X){
        bool hasil = false;
        int j = 15;
        int k = 0;
        while((j<=19) &&(k<=X.length()+1) && (!hasil)){
            while(k<=X.length()){
                if(record[j][k]==X[k]){
                    k = k+1;
                }else{
                    j = j+1;
                }
            }
        if(j<=19){
            hasil = true;
        }

        }
        return hasil;
    }


int main()
{
    cout<<"\t\t\t\t\tPROGRAM INI MENERIMA INPUTAN DARI USER"<<endl;
    cout<<"\t\t\t\t\t\tINPUTAN ADALAH KEY SENSITIF"<<endl;
    cout<<"\t\t\t\t\tINPUTKAN KATA SESUAI DAFTAR KATA DIBAWAH INI"<<endl;
    cout<<"\t\t\t================================DAFTAR KATA===============================\n";
    cout<<"\t\t\tSUBJEK:\t\tPREDIKAT:\t\tOBJEK:\t\tKETERANGAN:";
    cout<<"\n\t\t\t1. Saya\t\t1. main\t\t\t1. buku\t\t1. dikantin";
    cout<<"\n\t\t\t2. Kamu\t\t2. belajar\t\t2. bola\t\t2. dikampus";
    cout<<"\n\t\t\t3. Dia\t\t3. makan\t\t3. pensil\t3. dirumah";
    cout<<"\n\t\t\t4. Aku\t\t4. tidur\t\t4. motor\t4. dikelas";
    cout<<"\n\t\t\t5. Anda\t\t5. minum\t\t5. mobil\t5. dilab";

    bool validS = false;
    bool validP = false;
    bool validO = false;
    bool validK = false;
    string kata;

    cout << "\n\n\t\t\tInput Kalimat\n\t\t\t>>> ";
    cin>>kata;
    cout<<endl;
    while (kata != "."){
        if(cekS(record, kata)==true){
            validS = true;
            cout<<"'"<<kata<<"'"<<" Golongan\t\t: Subjek"<<endl;
        }
        //cout << "Input kata\n>>> ";
        cin>>kata;
        if(cekP(record, kata)==true){
            validP = true;
            cout<<"'"<<kata<<"'"<<" Golongan\t: Predikat"<<endl;
        }
        else{
            if(kata == "."){
                break;
        }
        }
        //cout << "Input kata\n>>> ";
        cin>>kata;
        if(cekO(record, kata)==true){
            validO = true;
            cout<<"'"<<kata<<"'"<<" Golongan\t\t: Objek"<<endl;
        }
        else{
            if(kata == "."){
                break;
        }
        }

        //cout << "Input kata\n>>> ";
        cin>>kata;
        if(cekK(record, kata)==true){
            validK = true;
            cout<<"'"<<kata<<"'"<<" Golongan\t: Keterangan"<<endl;
        }
        else{
            if(kata == "."){
                break;
        }

        //cout << "Input kata\n>>> ";
        cin>>kata;
        }
    }

    if(validS == true && validP == true && validO == true && validK == true){
        cout<< "\nKalimat di atas valid.\n";
    }else{
        if(validS == true && validP == true){
            cout<< "\nKalimat di atas valid.\n";
        }else{
            if(validS == true && validP == true && validO == true){
                cout << "\nKalimat di atas valid.\n";
            }else{
                if(validS == true && validP == true && validK == true){
                    cout << "\nKalimat di atas valid.\n";
                }else{
                    cout << "\nKalimat di atas tidak valid.\n";
                }
            }
        }
    }


}

