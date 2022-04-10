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

	}

	Window::~Window() {
		if (m_Window) {
			glfwDestroyWindow(m_Window);
		}
		glfwTerminate();
	}

	void Window::clear() const {

	}

	void Window::update() {
		
		
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
}
