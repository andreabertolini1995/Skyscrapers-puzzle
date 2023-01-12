/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abertoli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:15:37 by abertoli          #+#    #+#             */
/*   Updated: 2022/10/23 18:15:39 by abertoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_cols_1(int matrix[4][4], int view, int opposite_view, int col)
{
	if (view == 1)
	{
		if (opposite_view == 2)
		{
			matrix[0][col] = 4;
			matrix[3][col] = 3;
		}
		if (opposite_view == 4)
		{
			matrix[0][col] = 4;
			matrix[1][col] = 3;
			matrix[2][col] = 2;
			matrix[3][col] = 1;
		}
	}
}

void	ft_fill_cols_2(int matrix[4][4], int view, int opposite_view, int col)
{
	if (view == 2)
	{
		if (opposite_view == 1)
		{
			matrix[0][col] = 3;
			matrix[3][col] = 4;
		}
		else if (opposite_view == 3)
			matrix[1][col] = 4;
	}
}

void	ft_fill_cols_3(int matrix[4][4], int view, int opposite_view, int col)
{
	if (view == 3)
	{
		if (opposite_view == 2)
			matrix[2][col] = 4;
	}
}

void	ft_fill_cols_4(int matrix[4][4], int view, int col)
{
	if (view == 4)
	{
		matrix[0][col] = 1;
		matrix[1][col] = 2;
		matrix[2][col] = 3;
		matrix[3][col] = 4;
	}
}

void	ft_fill_cols(int matrix[4][4], int view, int opposite_view, int col)
{
	ft_fill_cols_1(matrix, view, opposite_view, col);
	ft_fill_cols_2(matrix, view, opposite_view, col);
	ft_fill_cols_3(matrix, view, opposite_view, col);
	ft_fill_cols_4(matrix, view, col);
}
