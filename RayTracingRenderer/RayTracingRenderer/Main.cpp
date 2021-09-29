#include <iostream>

int main()
{
	/*
	std::cout << "Hello World! I am rusty and may keep this here for a lil bit..." << std::endl;
	std::cin.get();
	*/
	
	// image
	const int image_width = 256;
	const int image_height = 256;

	// render
	std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

	for (int i = (image_height - 1); i >= 0; i--)
	{
		// cerr is the error output stream
		// first part of the progress indicator
		std::cerr << "\rScanlines remaining: " << i << ' ' << std::flush;

		for (int j = 0; j < image_width; j++)
		{
			auto r = double(j) / (image_width - 1);
			auto g = double(i) / (image_height - 1);
			auto b = 0.25;

			int ir = static_cast<int>(255.99 * r);
			int ig = static_cast<int>(255.99 * g);
			int ib = static_cast<int>(255.99 * b);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n';
		}
	}

	// end of the progress indicator
	std::cerr << "\nDone.\n";
}