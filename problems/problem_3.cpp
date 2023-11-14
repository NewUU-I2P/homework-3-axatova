#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    
        if (S == 'M') {
        if (height < 1.70) {
            cout << "Short" << endl;
        } else if (height >= 1.70 && height < 1.85) {
            cout << "Normal" << endl;
        } else {
            cout << "Tall" << endl;
        }
    } else if (S == 'F') {
        if (height < 1.60) {
            cout << "Short" << endl;
        } else if (height >= 1.60 && height < 1.75) {
            cout << "Normal" << endl;
        } else {
            cout << "Tall" << endl;
        }
    } else {
        cout << "Invalid input for sex." << endl;
    }

    return 0;
}

    
