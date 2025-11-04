#include <iostream>
using namespace std;

void add (int a, int b){
	cout <<"Sum (int):"<<a + b<<endl;
}
void add (float a, float b){
	cout <<"Sum (float):"<< a+b <<endl;
}

int main (){
    char choice;
    cout << "Do you want to add integers or floats? (i/f): ";
    cin >> choice;

    if (choice == 'i') {
        int x, y;
        cout << "Enter two integers: ";
        cin >> x >> y;
        add(x, y);
    }
    else if (choice == 'f') {
        float x, y;
        cout << "Enter two float numbers: ";
        cin >> x >> y;
        add(x, y);
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}


