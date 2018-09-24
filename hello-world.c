#include <cairo/cairo.h>

#define WIDTH  400
#define HEIGHT 300
#define FILENAME "hello-world.png"

int
main(void)
{
  cairo_surface_t *surface;
  cairo_t *cr;

  surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32,
      WIDTH, HEIGHT);
  cr = cairo_create(surface);

  cairo_surface_write_to_png(surface, FILENAME);
  cairo_surface_destroy(surface);
  cairo_destroy(cr);
}
