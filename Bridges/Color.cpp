#include "Color.hpp"

//По умолчанию объекты белые
Color::Color() :red_(255), green_(255), blue_(255)
{
}

Color::Color(int red, int green, int blue)
	:red_(red), green_(green), blue_(blue)
{
}

void Color::SetColor(int red, int green, int blue)
{
	red_ = red;
	green_ = green;
	blue_ = blue;
}

std::string Color::GetHexCode() const
{
	std::string result{ "#" };
	result += std::to_string(red_);
	result += std::to_string(green_);
	result += std::to_string(blue_);
	return result;
}

bool Color::operator==(const Color& other) const
{
	return red_==other.red_ && 
		green_ == other.green_ && 
		blue_ == other.blue_;
}

std::ostream& operator<<(std::ostream& out, const Color& obj)
{
	out << obj.GetHexCode();
	return out;
}
