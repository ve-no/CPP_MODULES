#ifndef BRAIN_HPP
#define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain &operator=(const Brain &copy);
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
	private:
		std::string ideas[100];
};

#endif
