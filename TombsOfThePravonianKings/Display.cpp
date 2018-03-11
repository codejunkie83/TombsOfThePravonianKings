//
// Created by codej on 3/10/2018.
//

#include "Display.h"

Display::Display(int width, int height, const std::string& title) {
    if(glfwInit())
    {
        window = glfwCreateWindow(width, height, title.c_str(), NULL, NULL);
        if(!window)
            glfwTerminate();

        glfwMakeContextCurrent(window);
    }
}

Display::~Display() {
    window = NULL;
    glfwTerminate();
}

void Display::Run() {
    while(!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.8f, 0.5f, 0.8f, 1.0f);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
}
