#include "../include/api.h"
int main(int argc, char** argv) {
    while (1) {
        if (!API::wallLeft()) {
            API::turnLeft();
            API::moveForward();
        }
        else if (!API::wallFront()) {
            API::moveForward();
        }
        else {
            API::turnRight();
        }
    }
    return 0;
}
