/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:34:12 by gozon             #+#    #+#             */
/*   Updated: 2025/01/27 14:20:34 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon) {
}

HumanA::~HumanA() {
}

void    HumanA::attack(void) {

    std::cout << this->name << " attacks with their " 
    << this->weapon.getType() << std::endl;

}