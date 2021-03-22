#include "ExampleWindow.h"

#include <stdexcept>
#include <SDL2/SDL_image.h>

ExampleWindow::ExampleWindow(int width, int height)
: Window(width, height), _kvadro_x(500), _kvadro_y(300), _kvadro_phase(0.),
  _car_x(180), _car_y(550),_sun_x(1500), _sun_y(150),_mount_x(0),_mount_y(350),_mount_x1(1900),_mount_y1(350),
  _cloud_first_x(0),_cloud_first_y(60),_cloud_second_x(1900),_cloud_second_y(60),_cloud_third_x(800),_cloud_third_y(120),
  _road_x(0),_road_y(650),_road1_x(1900),_road1_y(650),
  _field_x(0),_field_y(460),_field1_x(1900),_field1_y(460),
  _stolb_rect11_x(200),_stolb_rect12_x(510),_stolb_rect13_x(850),_stolb_rect14_x(1170),_stolb_rect15_x(1500),
  _stolb_rect21_x(200),_stolb_rect22_x(510),_stolb_rect23_x(850),_stolb_rect24_x(1170),_stolb_rect25_x(1500),
  _tree_x(750),_tree_y(450),_kust_x(2600),_kust_y(550),_wolf_x(870), _wolf_y(700),
  _znak_x(2700), _znak_y(750),_kvadro_main_x(870), _kvadro_main_y(870)

{

	//_bee = std::shared_ptr<SDL_Texture>(
	//		IMG_LoadTexture(_renderer.get(), "bzzzz2.png"),
	//		SDL_DestroyTexture);
	//if (_bee == nullptr)
	//	throw std::runtime_error(
	//			std::string("Не удалось загрузить пчелу: ") +
	//			std::string(SDL_GetError()));
	_skying = std::shared_ptr<SDL_Texture>(
			IMG_LoadTexture(_renderer.get(), "skying.png"),
			SDL_DestroyTexture);
		if (_skying == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить небо: ") +
				std::string(SDL_GetError()));
	_sun = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "sun.png"),
				SDL_DestroyTexture);
		if (_sun == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить Солнце: ") +
				std::string(SDL_GetError()));
	_cloud_first = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "cloud_first.png"),
				SDL_DestroyTexture);
		if (_cloud_first == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить первый слой облаков: ") +
				std::string(SDL_GetError()));
	_cloud_second = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "cloud_second.png"),
				SDL_DestroyTexture);
		if (_cloud_second == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить первый слой облаков: ") +
				std::string(SDL_GetError()));
	_cloud_third = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "cloud_third.png"),
				SDL_DestroyTexture);
		if (_cloud_third == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить второй слой облаков: ") +
				std::string(SDL_GetError()));
	_field = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "field.png"),
				SDL_DestroyTexture);
		if (_field == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить луг: ") +
				std::string(SDL_GetError()));
	_field1 = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "field1.png"),
				SDL_DestroyTexture);
		if (_field1 == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить луг: ") +
				std::string(SDL_GetError()));
	_mount = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "mount.png"),
				SDL_DestroyTexture);
		if (_mount == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить горы: ") +
				std::string(SDL_GetError()));
	_mount1 = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "mount1.png"),
				SDL_DestroyTexture);
		if (_mount1 == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить горы: ") +
				std::string(SDL_GetError()));
	_road = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "road.png"),
				SDL_DestroyTexture);
		if (_road == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить дорогу: ") +
				std::string(SDL_GetError()));
	_stolb = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "stolb.png"),
				SDL_DestroyTexture);
		if (_stolb == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить дорожные столбики: ") +
				std::string(SDL_GetError()));
	_car = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "car.png"),
				SDL_DestroyTexture);
		if (_car == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить машину: ") +
				std::string(SDL_GetError()));
	_tree = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "tree.png"),
				SDL_DestroyTexture);
		if (_tree == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить дерево: ") +
				std::string(SDL_GetError()));
	_kust = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "kust.png"),
				SDL_DestroyTexture);
		if (_kust == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить куст: ") +
				std::string(SDL_GetError()));
	_wolf = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "wolf.png"),
				SDL_DestroyTexture);
		if (_wolf == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить цветок: ") +
				std::string(SDL_GetError()));
	_znak = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "znak.png"),
				SDL_DestroyTexture);
		if (_znak == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить дорожный знак: ") +
				std::string(SDL_GetError()));
	_kvadro_main = std::shared_ptr<SDL_Texture>(
				IMG_LoadTexture(_renderer.get(), "kvadro.png"),
				SDL_DestroyTexture);
		if (_kvadro_main == nullptr)
		throw std::runtime_error(
				std::string("Не удалось загрузить главную пчелу: ") +
				std::string(SDL_GetError()));


}


void ExampleWindow::render()
{
	SDL_SetRenderDrawColor(_renderer.get(), 0, 165, 255, 0);
	SDL_RenderClear(_renderer.get());

	//SDL_Rect bee_rect { _bee_x, _bee_y, 256, 256 };
	SDL_Rect sky_rect { 0, 0, 1920, 520 };
	SDL_Rect sun_rect { _sun_x, _sun_y, 128, 128 };
	SDL_Rect cloud_first_rect { _cloud_first_x, _cloud_first_y, 1920, 450 };
	SDL_Rect cloud_second_rect {_cloud_second_x, _cloud_second_y, 1920, 450 };
	SDL_Rect cloud_third_rect {_cloud_third_x, _cloud_third_y, 250, 250 };
	SDL_Rect field_rect { _field_x, -_field_y, 1920, 1150 };
	SDL_Rect field1_rect { _field1_x, -_field1_y, 1920, 1150 };
		SDL_Rect mount_rect { _mount_x, _mount_y, 1920, 400 };
		SDL_Rect mount_rect1 { _mount_x1, _mount_y1, 1920, 400 };
	SDL_Rect road_rect { _road_x, _road_y, 1925, 200 };
	SDL_Rect road1_rect { _road1_x, _road1_y, 1925, 200 };
	SDL_Rect stolb_rect11 { _stolb_rect11_x, 580, 200, 80 };
	SDL_Rect stolb_rect12 { _stolb_rect12_x, 580, 200, 80 };
	SDL_Rect stolb_rect13 { _stolb_rect13_x, 580, 200, 80 };
	SDL_Rect stolb_rect14 { _stolb_rect14_x, 580, 200, 80 };
	SDL_Rect stolb_rect15 { _stolb_rect15_x, 580, 200, 80 };
		SDL_Rect stolb_rect21 { _stolb_rect21_x, 753, 220, 100 };
		SDL_Rect stolb_rect22 { _stolb_rect22_x, 753, 220, 100 };
		SDL_Rect stolb_rect23 { _stolb_rect23_x, 753, 220, 100 };
		SDL_Rect stolb_rect24 { _stolb_rect24_x, 753, 220, 100 };
		SDL_Rect stolb_rect25 { _stolb_rect25_x, 753, 220, 100 };
	SDL_Rect car_rect { _car_x, _car_y, 500, 300 };
	SDL_Rect tree_rect { _tree_x, _tree_y, 300, 200 };
	SDL_Rect kust_rect { _kust_x, _kust_y, 200, 120 };
	SDL_Rect wolf_rect { _wolf_x, _wolf_y, 400, 400 };
	SDL_Rect znak_rect { _znak_x, _znak_y, 200, 200 };
	SDL_Rect kvadro_main_rect { _kvadro_main_x, _kvadro_main_y, 100, 100 };
	//SDL_RenderCopy(_renderer.get(), _bee.get(), nullptr, &bee_rect);
	SDL_RenderCopy(_renderer.get(), _skying.get(), nullptr, &sky_rect);
	SDL_RenderCopy(_renderer.get(), _cloud_third.get(), nullptr, &cloud_third_rect);
	SDL_RenderCopy(_renderer.get(), _cloud_first.get(), nullptr, &cloud_first_rect);
	SDL_RenderCopy(_renderer.get(), _cloud_second.get(), nullptr, &cloud_second_rect);
	SDL_RenderCopy(_renderer.get(), _sun.get(), nullptr, &sun_rect);
	SDL_RenderCopy(_renderer.get(), _field.get(), nullptr, &field_rect);
	SDL_RenderCopy(_renderer.get(), _field1.get(), nullptr, &field1_rect);
		SDL_RenderCopy(_renderer.get(), _mount.get(), nullptr, &mount_rect);
		SDL_RenderCopy(_renderer.get(), _mount1.get(), nullptr, &mount_rect1);
	SDL_RenderCopy(_renderer.get(), _tree.get(), nullptr, &tree_rect);
	SDL_RenderCopy(_renderer.get(), _kust.get(), nullptr, &kust_rect);
	SDL_RenderCopy(_renderer.get(), _road.get(), nullptr, &road_rect);
	SDL_RenderCopy(_renderer.get(), _road.get(), nullptr, &road1_rect);
	SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect11);
	SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect12);
	SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect13);
	SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect14);
	SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect15);
	SDL_RenderCopy(_renderer.get(), _car.get(), nullptr, &car_rect);
		SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect21);
		SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect22);
		SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect23);
		SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect24);
		SDL_RenderCopy(_renderer.get(), _stolb.get(), nullptr, &stolb_rect25);
	SDL_RenderCopy(_renderer.get(), _wolf.get(), nullptr, &wolf_rect);
	SDL_RenderCopy(_renderer.get(), _znak.get(), nullptr, &znak_rect);
	SDL_RenderCopy(_renderer.get(), _kvadro_main.get(), nullptr, &kvadro_main_rect);




}

void ExampleWindow::do_logic()
{
	//_bee_x += 6;
	//if (_bee_x >= width())
	//	_bee_x = -256;
	//_bee_y += 8 * sin(_bee_phase);
	//_bee_phase += 0.1;
	_sun_x -= 1;
		if (_sun_x <= 0)
			_sun_x = 1900;

	_mount_x -= 2;
		if (_mount_x <= -width())
			_mount_x = 1900;
	_mount_x1 -= 2;
		if (_mount_x1 <= -width())
			_mount_x1 = 1900;

	_cloud_first_x -= 3;
		if (_cloud_first_x <= -width())
			_cloud_first_x = 1900;
	_cloud_second_x -= 3;
		if (_cloud_second_x <= -width())
			_cloud_second_x = 1900;
	_cloud_third_x -= 3;
		if (_cloud_third_x <= 0)
			_cloud_third_x = 1900;

	_tree_x -= 3;
		if (_tree_x <= -width())
			_tree_x = 2000;

	_stolb_rect11_x -= 4;
		if (_stolb_rect11_x <= 0)
			_stolb_rect11_x = 1700;
	_stolb_rect12_x -= 4;
		if (_stolb_rect12_x <= 0)
			_stolb_rect12_x = 1700;
	_stolb_rect13_x -= 4;
		if (_stolb_rect13_x <= 0)
			_stolb_rect13_x = 1700;
	_stolb_rect14_x -= 4;
		if (_stolb_rect14_x <= 0)
			_stolb_rect14_x = 1700;
	_stolb_rect15_x -= 4;
		if (_stolb_rect15_x <= 0)
			_stolb_rect15_x = 1700;

	_car_x += 1;
		if (_car_x >= width())
			_car_x = -256;
	_road_x -= 5;
		if (_road_x <= -width())
			_road_x = 1900;
	_road1_x -= 5;
		if (_road1_x <= -width())
			_road1_x = 1900;

	_stolb_rect21_x -= 6;
		if (_stolb_rect21_x <= 0)
			_stolb_rect21_x = 1700;
	_stolb_rect22_x -= 6;
		if (_stolb_rect22_x <= 0)
			_stolb_rect22_x = 1700;
	_stolb_rect23_x -= 6;
		if (_stolb_rect23_x <= 0)
			_stolb_rect23_x = 1700;
	_stolb_rect24_x -= 6;
		if (_stolb_rect24_x <= 0)
			_stolb_rect24_x = 1700;
	_stolb_rect25_x -= 6;
		if (_stolb_rect25_x <= 0)
			_stolb_rect25_x = 1700;

	_kust_x -= 7;
		if (_kust_x <= -width())
			_kust_x = 2000;
	_wolf_x -= 7;
		if (_wolf_x <= -width())
			_wolf_x = 2000;
	_znak_x -= 7;
		if (_znak_x <= -width())
			_znak_x = 2000;

	_field_x -= 3;
		if (_field_x <= -width())
			_field_x = 1900;
	_field1_x -= 3;
		if (_field1_x <= -width())
			_field1_x = 1900;
}


void ExampleWindow::handle_keys(const Uint8 *keys)
{
	//if (keys[SDL_SCANCODE_DOWN])
	//	_bee_y += 6;
	//if (keys[SDL_SCANCODE_UP])
	//	_bee_y -= 6;

	if (keys[SDL_SCANCODE_DOWN]){
		if((_kvadro_main_y + 6 + 200) < height())
		_kvadro_main_y += 6;
	}
	if (keys[SDL_SCANCODE_UP]){
		if((_kvadro_main_y - 6 - 100) > 0)
		_kvadro_main_y -= 6;
	}

	if (keys[SDL_SCANCODE_LEFT]){
		if((_kvadro_main_x - 6 - 200) > 0)
		_kvadro_main_x -= 6;
	}

	if (keys[SDL_SCANCODE_RIGHT]){
		if((_kvadro_main_x + 6 + 300) < width())
		_kvadro_main_x += 6;
	}

}



