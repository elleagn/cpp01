/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:34:43 by gozon             #+#    #+#             */
/*   Updated: 2025/01/27 14:18:54 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA {

    private:
    
        std::string name;
        Weapon&     weapon;
    
    public:
    
                HumanA(std::string name, Weapon& weapon);
                ~HumanA(void);
        void    attack(void);
    
};

#endif