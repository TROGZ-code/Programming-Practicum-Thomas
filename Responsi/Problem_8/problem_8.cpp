#include <iostream>
using namespace std;

int list1[] = {1,2,3,4,5}, list2[] = {1,2,3,4,5}, size1, size2;


void sort(int x[], int n){
    int temp, min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i+ 1; j < n; j++) {
            if (x[j] < x[min]) {
                min = j;
            }
        }
        
        temp = x[i];
        x[i] = x[min];
        x[min] = temp;
    }
    return;
}

int main()
{
size1 = sizeof(list1)/sizeof(list1[0]); //5
size2 = sizeof(list2)/sizeof(list2[0]); //5

int newsize = size1 + size2;

int list3[newsize];
cout<<"New List = ";
for(int i = 0; i < newsize;i++){
    if(i < size1){
        list3[i] = list1[i];
        cout<<list3[i]<<" ";
    }
    if(i >= size1){
        list3[i]=list2[(i) - size1];
        cout<<list3[i]<<" ";
    }
}

cout<<endl;
cout<<"Sorted list = ";
for(int i = 0; i < newsize;i++){
    cout<<list3[i]<<" ";

sort(list3,newsize);

for(int i = 1; i < newsize;i++){
    cout<<list3[i]<<" ";
}
    return 0;
}
}