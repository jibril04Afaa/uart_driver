#include "uart.h"
#include "stm32f411xe.h"


/* initialize USART2 */
void uart_init();

/* send a single character */
void uart_send_char(char c);

/* send a null-terminated string */
void uart_send_string(const char* c);

/* receive a single character */
char uart_receive_char();
