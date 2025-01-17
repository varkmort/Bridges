#pragma once
#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Form {
public:
	enum class Forms
	{
		Square,
		Circle,
		Star,
		Parallelepiped,
		Prizm,
		Cone,
		Romb,
		Triangle,
		Hexagone,
		Octogone
	};
	Form();
	Form(int idForm);
	
	std::string GetName()const;

	bool operator==(const Form& other)const;

private:
	Forms form_;
};




#endif // !1
