#include<iostream>
int height_after_n_seconds(int height_original_meters);

int main() {
	std::cout << "Enter the height of the tower in meters: \n";
	int height_original_meters;
	std::cin >> height_original_meters;
	height_after_n_seconds(height_original_meters);
	return 0;
}



int height_after_n_seconds(int height_original_meters) {

	double distance_fallen_n_seconds;
	double current_ball_height{};
	for (size_t i = 0; i < 6; i++)
	{
		distance_fallen_n_seconds = 9.8 * (i * i) / 2;
		current_ball_height = height_original_meters - distance_fallen_n_seconds;

		if (current_ball_height < 0)
		{
			std::cout << "At: " << i << "seconds, the ball is on the ground.\n";
			return 0;
		}

	std::cout << "At: " << i << "seconds, the ball is at height: " << current_ball_height << "\n";

	};
	return 0;
}
	

