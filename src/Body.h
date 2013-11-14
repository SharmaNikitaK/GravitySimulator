class Body
{
private:
	float mass;
	float x_pos;
	float y_pos;
	float z_pos;
	PhysicsVector vel;
	PhysicsVector acc;
public:
	Body(float x_pos,float y_pos,float z_pos,float mass,PhysicsVector vel,PhysicsVector acc);
	float getMass();	
	float getXPos();
	float getYPos();
	float getZPos();
	float getDistance(Body b);
	PhysicsVector getVelocity();
	PhysicsVector getAcceleration();
	void interactWith(Body b); //modifies acceleration of this body, not body b
}