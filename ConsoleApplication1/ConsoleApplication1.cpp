#include <iostream>


using namespace std;


int summation(int number1, int number2);
int subtract(int number1, int number2);
double divide(double number1, double number2);
int multiply(int number1, int number2);


enum Operations {

    SUMMATION=1,
    SUBSTRACT,
    DIVIDE,
    MULTIPLY,
    EXIT
};


int main()
{
    int choice = 0;
    int number1 = 0, number2= 0;
  while(choice != EXIT){
        cout << "\nLutfen secim yapiniz\n";
        cout << "1-TOPLAMA\n2-CIKARMA\n3-BOLME\n4-CARPMA\n5-CIKIS" << endl;

        cin >> choice;

        if (choice == EXIT) {
            cout << "Cikis basarili" << endl;
            break;
        }
        else {
            cout << "1.Sayiyi giriniz:" << endl;
            cin >> number1;
            cout << "2.Sayiyi giriniz:" << endl;
            cin >> number2;

            switch (choice) {
            case SUMMATION:
                cout << summation(number1, number2);
                break;
            case SUBSTRACT:
                cout << subtract(number1, number2);
                break;
            case DIVIDE:
                cout << divide(number1, number2);
                break;
            case MULTIPLY:
                cout << multiply(number1, number2);
                break;
            default:
                cout << "Yanlis secim yaptiniz" << endl;
               
                break;
            }
        }
  }

    return 0;
}

int summation(int number1, int number2) {

    

    int result;

    result = number1 + number2;
 
    return result;

}
int subtract(int number1, int number2) {

    
    int result;

    result = number1 - number2;

    return result;

}
double divide(double number1, double number2) {

    
    double result;

    result = number1 / number2;

    return result;

}
int multiply(int number1, int number2) {

    
    int result;

    result = number1 * number2;

    return result;

}


