/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:34:09 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/31 20:54:00 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
    protected:
        std::string type;

    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &src);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &rhs);

        void makeSound() const;
        std::string getType() const;
};

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        ~WrongCat();

        WrongCat &operator=(const WrongCat &rhs);

        void makeSound() const;
};

#endif