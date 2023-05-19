#include "Splash.h"
#include "Object.h"

int Object::act_water(Direction fromwhere, Actor fromwho) {
	if(fromwho==WATER||fromwho==PLAYER)
	{
		if(size==1||size==2)
		{
			size++;
			

		}
		else if(size==3)
		{
			set2void(x, y, splash);
			size=0;
			(splash->score)++;
			if(x+1<splash->size){

				
				(splash->map[x+1][y])->act(UP,WATER);
			}
			if(y+1<splash->size){
				
				(splash->map[x][y+1])->act(LEFT,WATER);
			}
			if(x-1>=0){
				
				(splash->map[x-1][y])->act(DOWN,WATER);
			}
			if(y-1>=0){
				
				(splash->map[x][y-1])->act(RIGHT,WATER);
			}
			
			return 0;
		}
	}
	else if(fromwho==TOXIC)
	{
		
		if(size==1)
		{
			set2void(x,y,splash);
			
		}
		else if(size==2||size==3)
		{
			size--;
			
		}
		
	}
	
	return 0;
}

int Object::act_void(Direction fromwhere, Actor fromwho) {
	if(fromwho==PLAYER)
	{
		cout<<"Error: Cannot act a Void."<<endl;
		return 0;
	}
	
	if(fromwhere==UP&&x+1<splash->size)
		(splash->map[x+1][y])->act(UP,fromwho);
	if(fromwhere==LEFT&&y+1<splash->size)
		(splash->map[x][y+1])->act(LEFT,fromwho);
	if(fromwhere==DOWN&&x-1>=0)
		(splash->map[x-1][y])->act(DOWN,fromwho);
	if(fromwhere==RIGHT&&y-1>=0)
		(splash->map[x][y-1])->act(RIGHT,fromwho);
	return 0;
}

int Object::act_barrier(Direction fromwhere, Actor fromwho) {
	if(fromwho==PLAYER)
	{
		cout<<"Error: Cannot act a Barrier."<<endl;
		
	}
	return 0;
}

int Object::act_toxic(Direction fromwhere, Actor fromwho) {
	if(fromwho==TOXIC||fromwho==PLAYER)
	{
		if(size==1||size==2)
		{
			size++;
			

		}
		else if(size==3)
		{
			size=0;
			set2void(x, y, splash);
			(splash->score)--;
			if(x+1<splash->size){
				
			
				(splash->map[x+1][y])->act(UP,TOXIC);
			}
			if(y+1<splash->size){
				
			
				(splash->map[x][y+1])->act(LEFT,TOXIC);
			}
			if(x-1>=0){
				
				(splash->map[x-1][y])->act(DOWN,TOXIC);
			}
			
			if(y-1>=0){
				
				(splash->map[x][y-1])->act(RIGHT,TOXIC);
			}
			
			return 0;
		}
	}
	else if(fromwho==WATER)
	{
		
		if(size==1)
		{
			set2void(x,y,splash);
			
		}
		else if(size==2||size==3)
		{
			size--;
			
		}
	}
	return 0;
}