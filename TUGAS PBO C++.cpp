#include <iostream>
using namespace std;

int main(){
	int sepatu;
	
	int k=0;
	do {
            cout<<"*";
            k++;
        }
        while(k<=40);
    cout<<"\n           Tugas Toko Sepatu        "<<endl;
    cout<<"*****"<<endl;
    cout<<"Masukan banyak Merk Sepatu : ";
	cin>>sepatu;
	
	string data[sepatu][4];
	
	cout<<"Masukan Variasi Sepatu:"<<endl;
	for (int i=0;i<sepatu;i++)
        {
			cout<<""<<endl;
            cout<<"Data ke-"<<i+1<<endl;
            for (int j=0;j<4;j++)
            {
                if (j==0)
                {
                    cout<<"Merk Sepatu : ";
                }
                else if(j==1)
                {
                    cout<<"Ukuran Sepatu : ";
                }
                else if(j==2)
                {
                    cout<<"Warna Sepatu :";
                }
                else
                {
                    cout<<"Jumlah Sepatu : ";
                }
                cin>>data[i][j];
            }
        }
	cout<<"----------------------------------------"<<endl;
    cout<<"\ndata mahasiswa kelas "<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Merk Sepatu \t\t Ukuran Sepatu \t\t Warna Sepatu \t\t JUMLAH SEPATU \t"<<endl;
    for(int i=0;i<sepatu;i++)
    {
        for (int j=0; j<4;j++)
        {
            cout<<data[i][j]<<"\t\t";
        }
        cout<<endl;
    }
    return 0;
}
