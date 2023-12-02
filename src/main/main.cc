#define GLFW_INCLUDE_NONE

#include <iostream>
#include "../math/vector3.h"
#include "../math/ray.h"
#include "../renderer/renderer.h"

#include <GLFW/glfw3.h>


int main() { 

    // GLFWwindow* window;

    if (!glfwInit()) {
        return -1;
    }
    std::cout << "success!\n";
    // GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
    // if (!window) {
    //     std::cout << "Error: window or OpenGL context creation failed\n";
    //     return -1;
    // }

    


    return 0;
}
