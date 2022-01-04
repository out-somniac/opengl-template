#include <iostream>
#include <GL/glew.h>

int main()
{
    GLenum err = glewInit();
    if(GLEW_OK != err)
    {
        std::cerr << "Error: " << "\n";
        std::cerr << glewGetErrorString(err) << "\n";
        return 1;
    }
    std::cout << "Using glew: " << glewGetString(GLEW_VERSION) << "\n";
    return 0;
}
