#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T> 
class MutantStack: public std::stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin();
        const_iterator begin() const;
        
        iterator end();
        const_iterator end() const;

        reverse_iterator rbegin();
        const_reverse_iterator rbegin() const;
        
        reverse_iterator rend();
        const_reverse_iterator rend() const;

    	MutantStack(void);
        MutantStack(const MutantStack& copy);
        virtual ~MutantStack();

        MutantStack &operator=(const MutantStack &copy);
};

#endif
