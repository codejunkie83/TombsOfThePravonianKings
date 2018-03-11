#include <iostream>
#include <glm/glm.hpp>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {
    GLFWwindow* window;

    if (!glfwInit())
    {
        return -1;
    }

    window = glfwCreateWindow(1280, 720, "Tombs of the Forgotton", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.8f, 0.5f, 0.2f, 1.0f);
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}