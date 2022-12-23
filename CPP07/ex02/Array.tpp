/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:56:01 by stissera          #+#    #+#             */
/*   Updated: 2022/12/23 01:35:08 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<class T> Array<T>::Array() : _array(new T[0]), _aindex(0) {}

template<class T> Array<T>::Array(unsigned int nbr) : _array(new T[nbr]), _aindex(nbr)
{
	for (unsigned int i = 0; i < _aindex; i++)
		this->_array[i] = T();
}

template<class T> Array<T>::Array(Array<T> const &cpy) : _aindex(cpy._aindex), _array(new T[cpy.size()])
{
	for (unsigned int i = 0; i < this->_aindex; i++)
		this->_array[i]  = T(cpy._array[i]);
}

template<class T> Array<T>& Array<T>::operator=(Array<T> const& cpy)
{
	if (this == &cpy)
		return (*this);
	delete [] this->_array;
	this->_aindex = static_cast<unsigned int>(cpy.size());
	this->_array = new T[this->_aindex];
	for (unsigned int i = 0; i < this->_aindex; i++)
		this->_array[i] = T(cpy._array[i]);
	return (*this);
}

template<class T> Array<T>::~Array()
{ delete[] this->_array; }

template<class T> T& Array<T>::operator[](unsigned int nbr)
{
	if (nbr != 0 && nbr > (this->_aindex - 1))
		throw std::invalid_argument ("Invalid index.");
	return (this->_array[nbr]);
}

template<class T> unsigned int Array<T>::size() const
{ return (this->_aindex); }
