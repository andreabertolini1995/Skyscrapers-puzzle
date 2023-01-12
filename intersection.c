/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:43:51 by abertoli          #+#    #+#             */
/*   Updated: 2022/10/23 17:43:52 by abertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_arrays_equality(int arr1[4], int arr2[4])
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (arr1[i] == arr2[j] && i == j)
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	ft_check_arrays_only_pos(int arr1[4], int arr2[4])
{
	int	i;
	int	j;
	int	only_pos;

	only_pos = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (arr1[i] == arr2[j] && arr1[i] != 0)
				only_pos++;
			j++;
		}
		i++;
	}
	return (only_pos);
}

int	*ft_intersection(int arr1[4], int arr2[4])
{
	int	i;
	int	j;
	int	*intersection;

	intersection = (int *)malloc(sizeof(*intersection));
	if ((ft_check_arrays_equality(arr1, arr2) != 4)
		|| (ft_check_arrays_equality(arr1, arr2) == 4
			&& ft_check_arrays_only_pos(arr1, arr2) == 1))
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (arr1[i] == arr2[j] && arr1[i] != 0)
					intersection[0] = arr1[i];
				j++;
			}
			i++;
		}
	}
	return (intersection);
}
