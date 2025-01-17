#include "Form.hpp"

Form::Form():form_(Form::Forms::Square)
{
}

Form::Form(int idForm) :form_(static_cast<Form::Forms>(idForm))
{
}

bool Form::operator==(const Form& other) const
{
	return form_==other.form_;
}
