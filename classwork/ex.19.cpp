#include<iostream>
using namespace std;

class bullet{
	public:
		sf::rectangleshape shape;
		float speed;
		bullet(float x,flot y)
		{
			shape.setsize(sf::vector2f(5.f,10.f));
			shape.setfillcolor(sf::color::red);
			shape.setposition(x,y);
			speed=10.f;
		}
		void update()
		{
			shape.move(0.f,-speed);
		}
};
class plane{
	public:
		plane(float x,float y)
		{
			shape.setsize(sf::vector2f(50.f,50.f));
			shape.setfillcolor(sf::color::blue);
			shape.setposition(x,y);
			speed=5.f;
		}
		void moveleft()
		{
			if(shape.getposition().x>0)
			shape.move(-speed,0.f);
		}
		void moveright()
		{
			if(shape.getposition().x +shape.getsize().c<800)
			shape.move(speed,0.f);
		}
		void moveup()
		{
			if(shape.getposition().y>0)
			shape.move(0.f,-speed);
		}
		void movedown()
		{
			if(shape.getposition().y +shape.getsize().y<600)
			shape.move(0.f,speed);
		}
};

int main()
{
	sf::renderwindow window(sf::videomode(800,600),"fighter plane shooting game");
	window.setframeratelimit(60);
	plane player(375.f,500.f);
	std::vector<bullet>bullets;
	
	while(window.isOpen)
}
