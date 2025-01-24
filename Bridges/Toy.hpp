#pragma once

#ifndef TOY_HPP
#define TOY_HPP

#include <iostream>
#include <string>

#include "Color.hpp"
#include "Form.hpp"

class Toy {
public:
	Toy();
	Toy(std::string name, Color color, Form::Forms form);
	virtual ~Toy() = default;

	void SetName(const std::string &name);
	void SetColor(const Color &color);
	void SetForm(const Form::Forms &form);

	std::string GetName()const;
	Color GetColor()const;
	Form::Forms GetForm()const;

	friend bool operator ==(const Toy& a, const Toy& b);

	friend std::ostream& operator<<(std::ostream& out, const Toy& obj);
private:
	std::string name_;
	Color color_;
	Form form_;
};


#endif