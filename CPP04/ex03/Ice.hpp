/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 11:42:34 by stissera          #+#    #+#             */
/*   Updated: 2022/12/08 11:42:34 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#inlcude "./AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		//Ice(std::string const&);
		Ice(Ice const&);
		Ice& operator=(Ice const&);
		~Ice();
		AMateria* clone() const;
		void	use(ICharacter&);
};

#endif