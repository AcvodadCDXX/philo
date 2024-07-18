/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbogdano <bbogdano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:34:43 by bbogdano          #+#    #+#             */
/*   Updated: 2024/07/15 19:50:12 by bbogdano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/time.h>
#include <limits.h>

typedef pthread_mutex_t	t_mtx;

typedef struct s_sys	t_sys;

typedef struct s_philo
{
	int			id;
	long		meals_eaten;
	long		time_last_meal;
	int			full;
	t_fork		*left_fork;
	t_fork		*right_fork;
	pthread_t	thread_id;
	t_sys		*sys;
}				t_philo;

typedef struct s_fork
{
	t_mtx	fork;
	int		fork_id;
}			t_fork;

struct s_sys
{
	long	philo_nbr;
	long	time_to_die;
	long	time_to_eat;
	long	time_to_sleep;
	long	meal_limit;
	long	start_time;
	int		end_simulation;
	t_fork	*forks;
	t_philo	*philos;
}			t_sys;