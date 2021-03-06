#define GLFW_INCLUDE_NONE
#include <GL/glew.h>
#include <GLFW/glfw3.h>

namespace cazenove {
	class Window {
	private:
		const char* m_Title;
		int m_Width, m_Height;
		GLFWwindow* m_Window;
		bool m_Closed;
	public:
		Window(const char* name, int width, int height);
		~Window();
		void clear() const;
		void update();
		bool closed() const;
		void terminate();

		inline int getWidth() const { return m_Width; }
		inline int getHeight() const { return m_Height; }
	private:
		bool init();
		void error_callback(int error, const char* description);
	};
}