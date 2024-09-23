#include <iostream>
using namespace std;

double CgpaCal(double marks[], int n){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += marks[i];
    }
    double cgpa = sum / n;
    return cgpa;
}

int main(){
    int n;
    cout << "Enter the number of subjects: ";
    cin >> n;

    double marks[n];
    cout << "Enter points for each subject (from 0.00 to 10.00): \n";

    for (int i = 0; i < n; i++){
        do {
            cout << "Points in subject " << i + 1 << ": ";
            cin >> marks[i];
            if (marks[i] > 10.00 || marks[i] < 0.00)
                cout << "Please enter a value between 0.00 and 10.00.\n";
        } while (marks[i] > 10.00 || marks[i] < 0.00);
    }

    double cgpa = CgpaCal(marks, n);

    cout << "CGPA = " << cgpa << endl;
    cout << "CGPA Percentage = " << cgpa * 9.5 << endl;

    return 0;
}
