#include "vector.h"

namespace cazenove {
	namespace maths {
		vec2::vec2() {
			x = 0.0f;
			y = 0.0f;
		}

		vec2::vec2(const float& $x, const float& $y) : x($x), y($y) {
		}

		vec2& vec2::add(const vec2& other) {
			x += other.x;
			y += other.y;
			return *this;
		}

		vec2& vec2::subtract(const vec2& other) {
			x -= other.x;
			y -= other.y;
			return *this;
		}
		float vec2::multiply(const vec2& other) {
			return x * other.x + y * other.y;
		}

		vec2 operator +(const vec2& left, const vec2& right) {
			return vec2(left.x + right.x, left.y + right.y);
		}
		vec2 operator -(const vec2& left, const vec2& right) {
			return vec2(left.x - right.x, left.y - right.y);
		}
		float operator *(const vec2& left, const vec2& right) {
			return left.x * right.x + left.y * right.y;
		}

		bool vec2::operator ==(const vec2& other) {
			return x == other.x && y == other.y;
		}
		bool vec2::operator !=(const vec2& other) {
			return x != other.x || y != other.y;
		}

		vec2& vec2::operator +=(const vec2& other) {
			return add(other);
		}
		vec2& vec2::operator -=(const vec2& other) {
			return subtract(other);
		}
		float vec2::operator *=(const vec2& other) {
			return multiply(other);
		}

		std::ostream& operator <<(std::ostream& stream, const vec2& vector) {
			stream << "vec2 : (" << vector.x << "," << vector.y << ")";
			return stream;
		}

		float vec2::getAngle(const vec2& other) {
			return 0;
		}
} }
