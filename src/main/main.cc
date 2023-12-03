#define GLFW_INCLUDE_NONE

#include <iostream>
#include "../math/vector3.h"
#include "../math/ray.h"
#include "../renderer/renderer.h"

#include <GLFW/glfw3.h>
#include <glad/glad.h>

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width
    // and height will be significantly larger than specified on retina displays
    glViewport(0, 0, width, height);
}


int main() { 

    // GLFWwindow* window;
/*
    if (!glfwInit()) {
        std::cout << "Error: could not initialize GLFW.\n";
        return 1;
    }

    std::cout << "initialization success\n";

    GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);

    if (!window) {
        std::cout << "Error: window or OpenGL context creation failed\n";
        return 1;
    }

    std::cout << "window creation success\n";

    glfwMakeContextCurrent(window);
    // gladLoadGL(glfwGetProcAddress);
    // glfwSwapInterval(1);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    while (!glfwWindowShouldClose(window))
    {
        // Keep running
        // input
        // processInput(window);

        // rendering commands here
        // ...
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // check and call events and swap the buffers
        glfwPollEvents();
        glfwSwapBuffers(window);

    }


    glfwDestroyWindow(window);
 
    glfwTerminate();

*/


    GLFWwindow* window;

    // Initialize the library
    if(!glfwInit())
        return -1;

    // Define version and compatibility settings
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    // Create a windowed mode window and its OpenGL context
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    // Mathe the window's context current
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Initialize the OpenGL API with GLAD
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    // Loop until the user closes the window
    while(!glfwWindowShouldClose(window))
    {
        // Render here!
        glClear(GL_COLOR_BUFFER_BIT);

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}


//     return EXIT_SUCCESS;
// }
