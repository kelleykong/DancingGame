#include "gamelib.h"

void main(void)
{
	int i, j;
	float a, b;

	cli();
	init_timer();
	init_keyboard();
	init_graphics();
	init_game();
	sti();

	while(TRUE)
	{
		for(i = 0; i < 300000; i++)
		{
			if(i % 6000 == 0)
				velocity++;
			if(score == 0)
				game_over();
			else if(score == 50)
				game_win();
			else if(timer_fired)
			{
				run_game_logic();
			}
			idle();
		}
	}
}
