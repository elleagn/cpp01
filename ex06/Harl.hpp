/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:09:45 by gozon             #+#    #+#             */
/*   Updated: 2025/01/29 16:37:09 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    private:

        void   debug(void);
        void   info(void);
        void   warning(void);
        void   error(void);


    public:

        void   filter(std::string level);

};

#endif
