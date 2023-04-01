# GObject inheritance

Trying to understand and have quick example working with GObject inheritance can not be easy and may result in trying to match many macros with their underneath functionality.

This is a super quick example that basically shows how to declare and define a GObject inheritance. It's specially important to keep in mind the name conventions, the struct sizes, and how the macros are used to call inherited member objects.

Most of the failures when doing GObject structures are shown at run time and are not easy to follow. That's why I wanted to have an easy example that shows how it works.

## Requeriments
* `pkg-config`
* `gobject-2.0`
* `glib-2.0`

### Installing packages in Ubuntu:
```
apt install pkg-config libglib2.0-dev
```

## Building and run
```
make
./objects
```

## References:
* [GObject official tutorial](https://docs.gtk.org/gobject/tutorial.html)
* [GObject conventions](https://docs.gtk.org/gobject/concepts.html#conventions)
