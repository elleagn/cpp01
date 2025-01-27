/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:27:04 by gozon             #+#    #+#             */
/*   Updated: 2025/01/27 14:17:12 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <string>

class Weapon {

    private:
  
        std::string type;
    
    public:

                        Weapon(std::string type);
                        ~Weapon(void);
        std::string&    getType(void);
        void            setType(std::string type);

};

#endif