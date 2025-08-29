#include <iostream>
#include <iomanip>

int main() {
    int age = 20;
    float weight = 55.756;
    double height = 170.456789;
    double bmi = 18.5678;

    cout << "Age: " << age << endl;

    // Set precision to 2 decimal places for float/double
    cout << fixed << setprecision(2);
    cout << "Weight: " << weight << " kg" << endl;
    cout << "Height: " << height << " cm" << endl;
    cout << "BMI: " << bmi << endl;

    return 0;
}