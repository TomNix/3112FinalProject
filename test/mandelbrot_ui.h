// generated by Fast Light User Interface Designer (fluid) version 1.0304

#ifndef mandelbrot_ui_h
#define mandelbrot_ui_h
#include <FL/Fl.H>
#include "mandelbrot.h"
#include <FL/Fl_Window.H>
#include <FL/Fl_Float_Input.H>
#include <FL/Fl_Slider.H>
#include <FL/Fl_Box.H>

class Drawing_Window {
public:
  void make_window();
  Fl_Window *window;
  Drawing_Area *d;
  Fl_Float_Input *x_input;
private:
  inline void cb_x_input_i(Fl_Float_Input*, void*);
  static void cb_x_input(Fl_Float_Input*, void*);
public:
  Fl_Float_Input *y_input;
private:
  inline void cb_y_input_i(Fl_Float_Input*, void*);
  static void cb_y_input(Fl_Float_Input*, void*);
public:
  Fl_Float_Input *w_input;
private:
  inline void cb_w_input_i(Fl_Float_Input*, void*);
  static void cb_w_input(Fl_Float_Input*, void*);
  inline void cb_brightness_i(Fl_Slider*, void*);
  static void cb_brightness(Fl_Slider*, void*);
  inline void cb_iterations_i(Fl_Slider*, void*);
  static void cb_iterations(Fl_Slider*, void*);
public:
  void update_label(); 
};
#endif
