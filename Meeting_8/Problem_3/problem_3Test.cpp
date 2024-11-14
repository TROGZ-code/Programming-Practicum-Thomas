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
void Bubble_value(){
long n = 7, tempNISN, tempValue;
string tempName;

for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
        
        if (value[j] < value[j + 1]) {
            
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
void Sequential_search(long targetValue,string NewName) {
    int n = 7;
    bool found = false; 

    for (int i = 0; i < n; i++) {
        if (value[i] == targetValue) {
            Name[i] = NewName;  
            found = true;       
        }
    }

    if (!found) {
        cout << "Value " << targetValue << " not found." << endl;
    }
}

int main (){
long findValue;
string NewName;
cout<<"***Bubble Based on Value***"<<endl;
Bubble_value();
cout<<endl;


cout<<"Value = 60 ";
findValue = 60;
cout<<"New Name = Joko ";
NewName = "Joko";
cout<<endl;
Sequential_search(findValue, NewName);
print();
cout<<endl;
if(Name[4] == "Joko" && Name[5] == "Joko"){
    cout<<"********Test Passed********"<<endl;
}
else{
    cout<<"*********Test Failed*******"<<endl;
}



    return 0;
}
