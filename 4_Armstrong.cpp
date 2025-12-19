#include <iostream>
#include <cmath>
using namespace std;
class Armstrong {
private:
    int num;
public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }
    void checkArmstrong() {
        int original = num;
        int temp = num;
        int digits = 0;
        double sum = 0;
        while (temp != 0) {
            digits++;
            temp /= 10;
        }
        temp = num;
        while (temp != 0) {
            int remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }
        if (sum == original)
            cout << original << " is an Armstrong number." << endl;
        else
            cout << original << " is not an Armstrong number." << endl;
    }
};
int main() {
    Armstrong obj;  
    obj.getNumber();
    obj.checkArmstrong();
    return 0;
}
