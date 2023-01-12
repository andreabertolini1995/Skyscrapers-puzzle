/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_rows.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:35:18 by abertoli          #+#    #+#             */
/*   Updated: 2022/10/23 18:35:19 by abertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_rows_1(int matrix[4][4], int view, int opposite_view, int row)
{
	if (view == 1)
	{
		if (opposite_view == 2)
		{
			matrix[row][0] = 4;
			matrix[row][3] = 3;
		}
		if (opposite_view == 4)
		{
			matrix[row][0] = 4;
			matrix[row][1] = 3;
			matrix[row][2] = 2;
			matrix[row][3] = 1;
		}
	}
}

void	ft_fill_rows_2(int matrix[4][4], int view, int opposite_view, int row)
{
	if (view == 2)
	{
		if (opposite_view == 1)
		{
			matrix[row][0] = 3;
			matrix[row][3] = 4;
		}
		else if (opposite_view == 3)
			matrix[row][1] = 4;
	}
}

void	ft_fill_rows_3(int matrix[4][4], int view, int opposite_view, int row)
{
	if (view == 3)
	{
		if (opposite_view == 2)
			matrix[row][2] = 4;
	}
}

void	ft_fill_rows_4(int matrix[4][4], int view, int row)
{
	if (view == 4)
	{
		matrix[row][0] = 1;
		matrix[row][1] = 2;
		matrix[row][2] = 3;
		matrix[row][3] = 4;
	}
}

void	ft_fill_rows(int matrix[4][4], int view, int opposite_view, int row)
{
	ft_fill_rows_1(matrix, view, opposite_view, row);
	ft_fill_rows_2(matrix, view, opposite_view, row);
	ft_fill_rows_3(matrix, view, opposite_view, row);
	ft_fill_rows_4(matrix, view, row);
}
