#ifndef _GAMELIB_H_
#define _GAMELIB_H_

#define int_16  int
#define int_8   char
#define uint_16 unsigned int
#define uint_8  unsigned char
#define bool    uint_8

#define TRUE  1
#define FALSE 0

#define SEGMENT 0x8000

void cli(void);
void sti(void);
void idle(void);
void out_byte(uint_16 port, uint_8 data);
uint_8 in_byte(uint_16 port);

void memory_write(uint_16, uint_16, uint_16);

void init_timer(void);
void init_keyboard(void);

void init_graphics(void);
void draw_pixel(uint_16, uint_16, uint_8);

void init_game(void);
void run_game_logic(void);
void game_over(void);
void game_win(void);

extern bool timer_fired, need_refresh;
extern bool left_key, right_key, up_key, down_key;
extern int velocity;
extern int score;

#endif
