/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayache- <mayache-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:44:21 by mayache-          #+#    #+#             */
/*   Updated: 2023/10/19 19:44:22 by mayache-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        void KeranFilter(std::string level);
        Karen();
        ~Karen();
};

#endif
