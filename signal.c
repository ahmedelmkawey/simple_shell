#include "shell.h"


/**
 * handle_sigstp - Signal handler
 * @sig: Signal number
 * Return: sucsses
 */

void handle_sigstp(int sig)
{
	(void) sig;
	_puts("\n");
	prompt();
}


/**
 * handle_sigint - Signal handling
 * @sig: Signal number for it
 * Return: 0 on succes
 */


void handle_sigint(int sig)
{
	(void) sig;
	_putchar('\n');
	prompt();
}


/**
 * handle_sigquit -for Signal handler 
 * @sig: Signal of numbers
 * Return: succes
 */

void handle_sigquit(int sig)
{
	(void) sig;
	_puterror("Quit (core dumped)\n");
	exit(EXIT_SUCCESS);
}

