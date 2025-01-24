#pragma once
#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
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
	Form(Forms idForm);
	virtual ~Form() = default;
	
	std::string GetName()const;
	Forms GetType()const;


	bool operator==(const Form& other)const;
	friend std::ostream& operator<<(std::ostream& out, const Form& obj);
private:
	Forms form_;
};




#endif // !1
