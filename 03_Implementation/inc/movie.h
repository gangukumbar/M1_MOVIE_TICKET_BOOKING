/**
 * @file movie.h
 * @author Gangu Kumbar (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-04-02
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef__MOVIE_H
#define__MOVIE_H

/**
 * @brief Give the price of ticket
 *
 * @return int
 */
int changeprize(int);

/**
 * @brief Confirm the reservation of the slot
 *
 */
void reservation(int *, int, int);

/**
 * @brief Display the Output
 *
 * @return int
 */
int choice1(void);
/**
 * @brief Cancel the Ticket
 *
 */
void cancel(int *);
/**
 * @brief It will give the name of the movie name 1
 *
 * @param choice
 * @param name
 * @param id2
 * @param price
 */
void ticket1(int choice, char name[10], int id2, int price);
/**
 * @brief It will give the name of the movie name2
 *
 * @param choice
 * @param name
 * @param id2
 * @param price
 */
void ticket2(int choice, char name[10], int id2, int price);
/**
 * @brief It will give the name of the movie name3
 *
 * @param choice
 * @param name
 * @param id2
 * @param price
 */
void ticket3(int choice, char name[10], int id2, int price);
/**
 * @brief It will give the cmovie
 *
 * @return int
 */
int cmovie(void);
/**
 * @brief It will give the movie name
 *
 * @return int
 */
int movie(void);
/**
 * @brief It will give the details of movie
 *
 */
void details(void);

#endif
