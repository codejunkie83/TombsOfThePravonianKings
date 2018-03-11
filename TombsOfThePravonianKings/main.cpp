#include <iostream>
#include <glm/glm.hpp>

#include "Display.h"

int main() {
    Display display(1280, 720, "Tombs of the Pravonian Kings");
    display.Run();
    return 0;
}