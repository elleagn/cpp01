/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:34:12 by gozon             #+#    #+#             */
/*   Updated: 2025/02/03 10:36:53 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {
}

HumanB::~HumanB() {
}

void    HumanB::setWeapon(Weapon& weapon) {

    this->weapon = &weapon;
}

void    HumanB::attack(void) {

    if (!this->weapon) {
        std::cout << this->name << "has no weapon" << std::endl;
    }
    else {
        std::cout << this->name << " attacks with their " 
                  << this->weapon->getType() << std::endl;
    }

}