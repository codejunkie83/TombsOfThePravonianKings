//
// Created by codej on 3/10/2018.
//

#ifndef TOMBSOFTHEPRAVONIANKINGS_DISPLAY_H
#define TOMBSOFTHEPRAVONIANKINGS_DISPLAY_H
#include <string>
#include <GL/glew.h>
#include <GLFW/glfw3.h>


class Display {
public:
    Display(int width, int height, const std::string& title);
    virtual ~Display();
    void Run();

private:
    GLFWwindow* window;
};


#endif //TOMBSOFTHEPRAVONIANKINGS_DISPLAY_H
