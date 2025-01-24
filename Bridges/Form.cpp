#include "Form.hpp"

Form::Form():form_(Form::Forms::Square)
{
}

Form::Form(int idForm) :form_(static_cast<Form::Forms>(idForm))
{
}

Form::Form(Forms idForm) :form_(idForm)
{
}

std::string Form::GetName() const
{
	switch (form_)
	{
	case Form::Forms::Square:
		return "Square";
	case Form::Forms::Circle:
		return "Circle";
	case Form::Forms::Star:
		return "Star";
	case Form::Forms::Parallelepiped:
		return "Parallelepiped";
	case Form::Forms::Prizm:
		return "Prizm";
	case Form::Forms::Cone:
		return "Cone";
	case Form::Forms::Romb:
		return "Romb";
	case Form::Forms::Triangle:
		return "Triangle";
	case Form::Forms::Hexagone:
		return "Hexagone";
	case Form::Forms::Octogone:
		return "Octogone";
	default:
		return "";
	}
}

Form::Forms Form::GetType() const
{
	return form_;
}

bool Form::operator==(const Form& other) const
{
	return form_==other.form_;
}

std::ostream& operator<<(std::ostream& out, const Form& obj)
{
	return out << obj.GetName();
}
