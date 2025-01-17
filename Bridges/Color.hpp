#pragma once
#ifndef COLOR_HPP
#define COLOR_HPP

#include <string>

class Color {
public:
	Color();
	Color(int red, int green, int blue);

	void SetColor(int red, int green, int blue);

	std::string GetHexCode()const;

	bool operator==(const Color& other)const;

private:
	int red_;
	int green_;
	int blue_;
};


#endif // !COLOR_HPP
