#include "window.h"
#include "iostream"

namespace cazenove {
	Window::Window(const char* name, int width, int height) {
		m_Title = name;
		m_Width = width;
		m_Height = height;
		m_Closed = false;

		if (!glfwInit()) {
			exit(EXIT_FAILURE);
		}

		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
		m_Window = glfwCreateWindow(width, height, name, NULL, NULL);
		if (!m_Window) {
			glfwTerminate();
			exit(EXIT_FAILURE);
		}

		glfwMakeContextCurrent(m_Window);
	}

	Window::~Window() {
		if (m_Window) {
			glfwDestroyWindow(m_Window);
		}
		glfwTerminate();
	}

	void Window::clear() const {
		glClear(GL_COLOR_BUFFER_BIT);
	}

	void Window::update() {
		float ratio;
		int width, height;

		glfwGetFramebufferSize(m_Window, &width, &height);
		ratio = width / (float)height;

		glViewport(0, 0, width, height);

		glfwSwapBuffers(m_Window);
		glfwPollEvents();
	}

	bool Window::closed() const {
		return glfwWindowShouldClose(m_Window);
	}

	bool Window::init() {
		m_Title = "cazenove";
		m_Width = 960;
		m_Height = 540;

		if (!glfwInit()) {
			return false;
		}

		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
		m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL);
		if (!m_Window) {
			glfwTerminate();
			return false;
		}

		return true;
	}

	void Window::terminate() {
		glfwDestroyWindow(m_Window);
		glfwTerminate();
		exit(EXIT_SUCCESS);
	}

	void Window::error_callback(int error, const char* description) {
		fprintf(stderr, "Error: %s\n", description);
	}

	static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods) {

	}
}
