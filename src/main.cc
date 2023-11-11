#include <GLFW/glfw3.h>
#include <iostream>

int main()
{
    if (!glfwInit())
    {
        std::cerr << "Could not initialize GLFW!" << std::endl;
        return 1;
    }

    GLFWwindow *window = glfwCreateWindow(640, 480, "Learn WebGPU", NULL, NULL);

    if (!window)
    {
        std::cerr << "Could not create GLFW window!" << std::endl;
        glfwTerminate();
        return 1;
    }

    while (!glfwWindowShouldClose(window))
    {
        // Check whether the user clicked on the close button (and any other
        // mouse/key event, which we don't use so far)
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return 0;
}
