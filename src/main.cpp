#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

static void error_callback(int error, const char* description)
{
    std::cerr << description << "\n";
}

int main()
{
    GLFWwindow* window;
    glfwSetErrorCallback(error_callback);
    if(!glfwInit())
    {
        std::cerr << "Error while initializing GLFW" << "\n";
        return -1;
    }
    window = glfwCreateWindow(640, 480, "Window", NULL, NULL);
    if(!window)
    {
        std::cerr << "Error while creatign a window" << "\n";
        glfwTerminate();
        return -1;
    }
    
    glfwMakeContextCurrent(window);

    GLenum err = glewInit();
    if(GLEW_OK != err)
    {
        std::cerr << "Error while initializing GLEW: " << glewGetErrorString(err) << "\n";
        glfwTerminate();
        return 1;
    }
    std::cout << "Using glew: " << glewGetString(GLEW_VERSION) << "\n";
    
    while(!glfwWindowShouldClose(window))
    {
            glClear(GL_COLOR_BUFFER_BIT);
            glfwSwapBuffers(window);
            glfwPollEvents();
    }
    glfwTerminate();

    return 0;
}
