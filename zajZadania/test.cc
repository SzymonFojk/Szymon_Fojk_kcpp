#include <iostream>
using namespace std;

 

union elements {
        int amount;
        double weight;
};

 

int main(){
        elements e1;
        
        e1.weight = 33.44;
        cout << "e1.weight: " << e1.weight << endl;
        
        e1.amount = 12;
        cout << "e1.amount: " << e1.amount << endl;
        cout << "e1.weight: " << e1.weight << endl;
        
        cout << &e1 << ", " << &e1.weight << ", " << &e1.amount << endl;
        return 0;
}
