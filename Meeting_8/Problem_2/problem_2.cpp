#include<iostream>
using namespace std;


long NISN [] = {9960312699,9963959682,9950310962,9970272750,
                9970293945,9952382180,9965653989} ;
string Name [] = { "Handi Ramadhan", "Rio Alfandra", "Ronaldo Valentino Uneputty", "Achmad Yaumil Fadjri R.",
               "Alivia Rahma Pramesti","Ari Lutfianto","Arief Budiman"};
long value [] = {90,55,80,60,70,65,60};

void print(){
    int n = 7;
    for(int i = 0; i < n; i++) {
    cout << NISN[i]  << " - " << Name[i] << " - " << value[i] << endl;
    }
}
void Bubble_NISN(){
long n = 7, tempNISN, tempValue;
string tempName;

for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      
        if (NISN[j] < NISN[j + 1]) {
         
            tempValue = value[j];
            value[j] = value[j + 1];
            value[j + 1] = tempValue;

         
            tempNISN = NISN[j];
            NISN[j] = NISN[j + 1];
            NISN[j + 1] = tempNISN;

          
            tempName = Name[j];
            Name[j] = Name[j + 1];
            Name[j + 1] = tempName;
        }
    }
}

print();
}
void Binary_search(long targetNISN) {
    int min = 0, max = 6, mid;

    while (min <= max) {
        mid = (min + max) / 2;

        if (NISN[mid] == targetNISN) {
            cout << "Value of NISN [" << NISN[mid] << "] = " << value[mid] << endl;
            return;
        } else if (NISN[mid] > targetNISN) { 
            min = mid + 1; 
        } else {
            max = mid - 1; 
        }
    }
    cout << "NISN " << targetNISN << " not found." << endl;
}

int main (){
long findNISN;
cout<<"***Bubble Based on NISN***"<<endl;
Bubble_NISN();
cout<<endl;


cout<<"NISN = ";
cin>> findNISN;
Binary_search(findNISN);



    return 0;
}
