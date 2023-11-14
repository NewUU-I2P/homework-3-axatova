#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    
        if (S == 'M') {
        if (height < 1.70) {
            problemSolution3=Short;
        } else if (height >= 1.70 && height < 1.85) {
            problemSolution3=Normal;
        } else {
            problemSolution3=Tall;
        }
    } else if (S == 'F') {
        if (height < 1.60) {
            problemSolution3=Short;
        } else if (height >= 1.60 && height < 1.75) {
            problemSolution3=Normal;
        } else {
            problemSolution3=Tall;
        }
    } else {
        problemSolution3=Invalid;
    }

    return 0;
}

    
