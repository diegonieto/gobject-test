#ifndef __BASE_H__
#define __BASE_H__

#include <glib.h>
#include <glib-object.h>

G_BEGIN_DECLS

#define GST_TYPE_FOOBASE gst_foobase_get_type()
G_DECLARE_DERIVABLE_TYPE(
    GstFooBase, gst_foobase, GST, FOOBASE, GObject)

struct _GstFooBaseClass
{
    GObjectClass parent_class;

    /* Class virtual function fields. */
    void (*bar)();

    gpointer padding[12];
};

typedef struct
{
    int generic;
} GstFooBasePrivate;

void gst_foobase_bar(GstFooBase *self);

G_END_DECLS

#endif // __BASE_H__
