#include "Frame.hpp"

Frame::Frame():Frame(Form::Forms::Circle)
{
}

Frame::Frame(const Form& obj):form_(obj)
{
}

void Frame::SetForm(const Form& obj)
{
	form_ = obj;
}

const Form& Frame::GetForm() const
{
	return form_;
}

bool Frame::CanPath(const Toy& obj) const
{
	return obj.GetForm()==form_.GetType();
}

bool operator==(const Frame& a, const Frame& b)
{
	return a.form_==b.form_;
}

std::ostream& operator<<(std::ostream& out, const Frame& obj)
{
	return out << obj.form_ << " frame";
}
