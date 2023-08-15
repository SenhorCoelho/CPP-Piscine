#ifndef CONTACT_H
# define CONTACT_H
# include <string>

class Contact 
{
public:

	Contact(void);
	~Contact(void);

	std::string	getFname (void) const;
	std::string	getLname (void) const;
	std::string	getNname (void) const;
	std::string	getPhone (void) const;
	std::string	getSecret (void) const;
	void		setAll (void);

private:

	std::string _Fname;
	std::string _Lname;
	std::string _Nname;
	std::string _Phone;
	std::string _Secret;
};

#endif