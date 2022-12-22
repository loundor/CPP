/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:56:01 by stissera          #+#    #+#             */
/*   Updated: 2022/12/22 17:31:50 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<class T> Array<T>::Array() : _array(new T[0]), _aindex(0){}

template<class T> Array<T>::Array(unsigned int nbr) : _array(new T[nbr]), _aindex(nbr)
{
	for (unsigned int i = 0; i < nbr; i++)
		this->_array[i] = new T;
}

template<class T> Array<T>::Array(T const &cpy)
{
	
}

template<class T> Array<T>::~Array()
{
	std::cout << "Destructor" << std::endl;
	delete[] this->_array;
}

template<class T> T& Array<T>::operator=(T const& cpy)
{

	return (*this);
}

template<class T> T& Array<T>::operator[](unsigned int nbr)
{
	if (nbr > this->_aindex)
		throw ("Invalid index.");
	return (*this);
}

template<class T> unsigned int Array<T>::size() const
{ return (this->_aindex); }
