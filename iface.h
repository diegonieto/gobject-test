#ifndef __IFACE_H__
#define __IFACE_H__

#pragma once

#include <glib-object.h>

G_BEGIN_DECLS

#define FOO_TYPE_IFACE foo_iface_get_type()
G_DECLARE_INTERFACE (FooIface, foo_iface, FOO, IFACE, GObject)

struct _FooIfaceInterface
{
  GTypeInterface parent_iface;

  void (*baz) (FooIface  *self,
               GError         **error);
};

void foo_iface_baz (FooIface  *self,
                           GError         **error);

G_END_DECLS

#endif
