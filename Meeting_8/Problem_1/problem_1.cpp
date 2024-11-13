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
void Insertion_NISN(){
    int n = 7;
    for (int j = 1; j < n; j++) {
        long tempNISN = NISN[j];
        string tempName = Name[j];  // or std::string tempName = Name[j];
        long tempValue = value[j];

        int i = j - 1;
        while (i >= 0 && NISN[i] < tempNISN) {
            // Shift elements in all three arrays
            NISN[i + 1] = NISN[i];
            Name[i + 1] = Name[i];
            value[i + 1] = value[i];
            i--;
        }

        // Insert temp values at the correct position
        NISN[i + 1] = tempNISN;
        Name[i + 1] = tempName;
        value[i + 1] = tempValue;
    }

    // Print the sorted arrays
   print();
}
void Insertion_value(){
        int n = 7;
    for (int j = 1; j < n; j++) {
        long tempNISN = NISN[j];
        string tempName = Name[j];  // or std::string tempName = Name[j];
        long tempValue = value[j];

        int i = j - 1;
        while (i >= 0 && value[i] < tempValue) {
            // Shift elements in all three arrays
            NISN[i + 1] = NISN[i];
            Name[i + 1] = Name[i];
            value[i + 1] = value[i];
            i--;
        }

        // Insert temp values at the correct position
        NISN[i + 1] = tempNISN;
        Name[i + 1] = tempName;
        value[i + 1] = tempValue;
    }

    // Print the sorted arrays
    print();
}
void Selection_NISN(){
long n = 7, min, tempNISN, tempValue ;
string  tempName;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (NISN[j] > NISN[min]) {
                min = j;
            }
        }
        
        tempNISN = NISN[i];
        NISN[i] = NISN[min];
        NISN[min] = tempNISN;

        tempValue = value[i];
        value[i] = value[min];
        value[min] = tempValue;

        tempName = Name[i];
        Name[i] = Name[min];
        Name[min] = tempName;

    }
    
    print();
    }
void Selection_value(){
 long n = 7, min, tempNISN, tempValue ;
string  tempName;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (value[j] > value[min]) {
                min = j;
            }
        }
        
        tempNISN = NISN[i];
        NISN[i] = NISN[min];
        NISN[min] = tempNISN;

        tempValue = value[i];
        value[i] = value[min];
        value[min] = tempValue;

        tempName = Name[i];
        Name[i] = Name[min];
        Name[min] = tempName;

    }
    
    print();
    }   
//int Bubble()
int main (){
cout<<"***Insertion Based on NISN***"<<endl;
Insertion_NISN();
cout<<endl;
cout<<"***Insertion Based on value***"<<endl;
Insertion_value();
cout<<endl;
cout<<"***Selection Based on NISN***"<<endl;
Selection_NISN();
cout<<endl;
cout<<"***Selection Based on value***"<<endl;
Selection_value();

    return 0;
}
