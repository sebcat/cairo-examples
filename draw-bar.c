#include <cairo/cairo.h>

#define WIDTH  50
#define HEIGHT 300
#define FILENAME "draw-bar.png"

int
main(void)
{
  cairo_surface_t *surface;
  cairo_t *cr;

  surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,
      WIDTH, HEIGHT);
  cr = cairo_create(surface);

  cairo_set_source_rgb(cr, 0.6, 0.6, 0.6);
  cairo_set_line_width(cr, 20);
  cairo_rectangle(cr, 0, 0, WIDTH, HEIGHT * 0.05);
  cairo_fill(cr);

  cairo_surface_write_to_png(surface, FILENAME);
  cairo_surface_destroy(surface);
  cairo_destroy(cr);
}
