#include "Toy.hpp"

Toy::Toy() :Toy(std::string("Brick"), Color(255, 0, 0), Form::Forms::Square)
{}

Toy::Toy(std::string name, Color color, Form::Forms form) :
	name_(name),
	color_(color),
	form_(form)
{}

void Toy::SetName(const std::string & name)
{
	name_ = name;
}

void Toy::SetColor(const Color& color)
{
	color_ = color;
}

void Toy::SetForm(const Form::Forms& form)
{
	form_ = form;
}

std::string Toy::GetName()const
{
	return name_;
}

Color Toy::GetColor()const
{
	return color_;
}

Form::Forms Toy::GetForm()const
{
	return form_.GetType();
}

bool operator==(const Toy& a, const Toy& b)
{
	return false;
}

std::ostream& operator<<(std::ostream& out, const Toy& obj)
{
	return out << obj.name_ << ' ' << obj.color_ << obj.form_;
}


