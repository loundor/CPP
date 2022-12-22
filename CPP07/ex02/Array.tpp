/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stissera <stissera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 14:56:01 by stissera          #+#    #+#             */
/*   Updated: 2022/12/22 16:03:02 by stissera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<class T> Array<T>::Array()
{

}

template<class T> Array<T>::Array(unsigned int nbr)
{
	for (unsigned int i = 0; i < nbr; i++)
	{
		this->_array = new T[nbr];
	}
}

template<class T> Array<T>::Array(T const &cpy)
{
	
}

template<class T> Array<T>::~Array()
{
	for (unsigned int i = 0; i < this->_array; i++)
	{
		try
		{
			throw this->_array[i];
			delete this->_array[i];
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

template<class T> T& Array<T>::operator=(T const& cpy)
{

	return (*this);
}

template<class T> T& Array<T>::operator[](unsigned int nbr) // & ou * to return
{
	return (*this);
}

template<class T> unsigned int Array<T>::size() const
{
	return (this->_aindex);
}
