/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:13:57 by gozon             #+#    #+#             */
/*   Updated: 2025/01/26 11:11:59 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {

    std::cout << "Zombie " << name << " created." << std::endl;

}

Zombie::Zombie() : name("") {
    std::cout << "Nameless zombie created." << std::endl;
}

Zombie::~Zombie(void) {

    std::cout << "Zombie " << this->name << " destroyed." << std::endl;

}

void    Zombie::announce(void) const {

    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;

}

void    Zombie::setName(std::string name) {
    this->name = name;
}
