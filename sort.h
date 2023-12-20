#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void swap_liselm(listint_t *m, listint_t *n);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
size_t swap_elem(int *array, ssize_t low, ssize_t high);
void quick_sort(int *array, size_t size);
void partition(int *array, size_t size, ssize_t low, ssize_t high);
void swap(int *a, int *b);
size_t get_gap(size_t size);
void shell_sort(int *array, size_t size);
#endif
