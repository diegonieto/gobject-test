#include "iface-implemented.h"

static void foo_implemented_interface_init(FooIfaceInterface *iface);

G_DEFINE_TYPE_WITH_CODE(FooImplemented, foo_implemented, G_TYPE_OBJECT,
                        G_IMPLEMENT_INTERFACE(FOO_TYPE_IFACE,
                                              foo_implemented_interface_init))

static void
foo_implemented_baz(FooImplemented *self,
                    GError **error)
{
  g_print("baz: %s.\n", __PRETTY_FUNCTION__);
}

static void
foo_implemented_interface_init(FooIfaceInterface *iface)
{
  g_print("%s.\n", __PRETTY_FUNCTION__);
  iface->baz = foo_implemented_baz;
}

static void
foo_implemented_init(FooImplemented *self)
{
  g_print("%s\n", __PRETTY_FUNCTION__);
}

static void
foo_implemented_class_init(FooImplementedClass *klass)
{
  g_print("%s\n", __PRETTY_FUNCTION__);
}
