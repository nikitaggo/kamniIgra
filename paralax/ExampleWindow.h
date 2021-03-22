#ifndef EXAMPLEWINDOW_H_
#define EXAMPLEWINDOW_H_

#include "Window.h"

class ExampleWindow: public Window
{
protected:
	std::shared_ptr<SDL_Texture> _bee;
	std::shared_ptr<SDL_Texture> _skying;
	std::shared_ptr<SDL_Texture> _sun;
	std::shared_ptr<SDL_Texture> _cloud_first;
	std::shared_ptr<SDL_Texture> _cloud_second;
	std::shared_ptr<SDL_Texture> _cloud_third;
	std::shared_ptr<SDL_Texture> _field;
	std::shared_ptr<SDL_Texture> _field1;
	std::shared_ptr<SDL_Texture> _mount;
	std::shared_ptr<SDL_Texture> _mount1;
	std::shared_ptr<SDL_Texture> _road;
	std::shared_ptr<SDL_Texture> _stolb;
	std::shared_ptr<SDL_Texture> _car;
	std::shared_ptr<SDL_Texture> _tree;
	std::shared_ptr<SDL_Texture> _kust;
	std::shared_ptr<SDL_Texture> _wolf;
	std::shared_ptr<SDL_Texture> _znak;
	std::shared_ptr<SDL_Texture> _kvadro_main;
	int _kvadro_x, _kvadro_y, _car_x, _car_y ,_sun_x, _sun_y,
	_mount_x, _mount_y, _mount_x1, _mount_y1,_cloud_first_x,_cloud_first_y,_cloud_second_x,_cloud_second_y,
	_cloud_third_x,_cloud_third_y,_road_x,_road_y,_road1_x,_road1_y,
	_field_x,_field_y,_field1_x,_field1_y,
	_stolb_rect11_x,_stolb_rect12_x,_stolb_rect13_x,_stolb_rect14_x,_stolb_rect15_x,
	_stolb_rect21_x,_stolb_rect22_x,_stolb_rect23_x,_stolb_rect24_x,_stolb_rect25_x,
	_tree_x, _tree_y,_kust_x, _kust_y,_wolf_x, _wolf_y,_znak_x, _znak_y,
	_kvadro_main_x, _kvadro_main_y;
	double _kvadro_phase;

public:
	ExampleWindow(
			int width = DEFAULT_WIDTH,
			int height = DEFAULT_HEIGHT);
	virtual ~ExampleWindow() = default;

	virtual void render() override;
	virtual void do_logic() override;
	virtual void handle_keys(const Uint8 *keys) override;
};



#endif /* EXAMPLEWINDOW_H_ */
