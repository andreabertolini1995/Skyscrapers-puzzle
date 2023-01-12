/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_gaps.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:40:21 by abertoli          #+#    #+#             */
/*   Updated: 2022/10/23 18:40:23 by abertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_empty_array(int arr[4]);
int		*ft_intersection(int arr1[4], int arr2[4]);

void	ft_look_for_gaps_row(int matrix[4][4], int possibilities_row[4], int i)
{
	int	gap;
	int	count;
	int	k;

	gap = 1;
	while (gap <= 4)
	{
		count = 0;
		k = 0;
		while (k < 4)
		{
			if (matrix[i][k] != gap)
				count++;
			k++;
		}
		if (count == 4)
			possibilities_row[gap - 1] = gap;
		gap++;
	}
}

void	ft_look_for_gaps_col(int matrix[4][4], int possibilities_col[4], int j)
{
	int	gap;
	int	count;
	int	k;

	gap = 1;
	while (gap <= 4)
	{
		count = 0;
		k = 0;
		while (k < 4)
		{
			if (matrix[k][j] != gap)
				count++;
			k++;
		}
		if (count == 4)
			possibilities_col[gap - 1] = gap;
		gap++;
	}
}

void	ft_get_intersection(int matrix[4][4], int intersection[4], int i, int j)
{
	int	inter_counter;

	inter_counter = 0;
	while (intersection[inter_counter] != 0)
	{
		matrix[i][j] = intersection[inter_counter];
		inter_counter++;
	}
}

void	ft_fill_gaps_mainloop(int matrix[4][4], int possibilities_row[4],
							int possibilities_col[4], int *intersection)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (matrix[i][j] == 0)
			{
				ft_look_for_gaps_row(matrix, possibilities_row, i);
				ft_look_for_gaps_col(matrix, possibilities_col, j);
				intersection = ft_intersection(possibilities_col,
						possibilities_row);
				ft_get_intersection(matrix, intersection, i, j);
				ft_empty_array(possibilities_col);
				ft_empty_array(possibilities_row);
			}
			j++;
		}
		i++;
	}
}

void	ft_fill_gaps(int matrix[4][4])
{
	int	intersection[4];
	int	possibilities_row[4];
	int	possibilities_col[4];

	ft_empty_array(possibilities_col);
	ft_empty_array(possibilities_row);
	ft_fill_gaps_mainloop(matrix, possibilities_row,
		possibilities_col, intersection);
}
