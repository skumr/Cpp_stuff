#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Walking,
	PS_Running,
	PS_Crouching
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_status, float& speed);

int main()
{
	float MovementSpeed;

	PlayerStatus status = PS_Walking;

	UpdateMovementSpeed(status, MovementSpeed);

	cout << "Movement speed = " << MovementSpeed << endl;



	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_status, float& speed)
{

	if (P_status == PS_Running)
	{
		speed = RunSpeed;
	}

	else if (P_status == PS_Walking)
	{
		speed = WalkSpeed;
	}

	else if (P_status == PS_Crouching)
	{
		speed = CrouchSpeed;
	}
}