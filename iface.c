#include "iface.h"

G_DEFINE_INTERFACE (FooIface, foo_iface, G_TYPE_OBJECT)

static void
foo_iface_default_init (FooIfaceInterface *iface)
{
    /* add properties and signals to the interface here */
}

void
foo_iface_baz (FooIface  *self,
                      GError         **error)
{
  FooIfaceInterface *iface;

  g_return_if_fail (FOO_IS_IFACE (self));
  g_return_if_fail (error == NULL || *error == NULL);

  iface = FOO_IFACE_GET_IFACE (self);
  g_return_if_fail (iface->baz != NULL);
  iface->baz (self, error);
}
