#include <iostream>
#include <vector>


using namespace std;




void bubbleSort(vector<int>& vec) {
    int n = vec.size();
    for(int i =0; i<n; i++) {
        for(int j= 0; j < n -1 -i; j++) {
            if(vec[j] > vec[j+1]) {
                int temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
}
int main() {
    vector <int> vec;
    int size=7;

    cout<<"Enter the grades"<<endl;
    for(int i=0; i<size;i++) {
        int element;
        cin>>element;
        vec.push_back(element);
    }




    bubbleSort(vec);


    cout<<"The grades in order are: ";
    for(int num: vec) {
        cout << num<<" ";
    }
    int smallest=vec[0];
    int biggest=vec[6];

    cout<< "\nThe biggest number is "<<biggest<<endl;
    cout<< "The smallest number is "<<smallest<<endl;



    return 0;
}
