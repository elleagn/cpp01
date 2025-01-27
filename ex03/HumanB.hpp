/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:34:43 by gozon             #+#    #+#             */
/*   Updated: 2025/01/27 14:18:03 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB {

    private:
    
        std::string name;
        Weapon*     weapon;
    
    public:
    
                HumanB(std::string name);
                ~HumanB(void);
        void    setWeapon(Weapon& weapon);
        void    attack(void);
    
};

#endif