#ifndef HW_VFIO_MONETA_TRACE_H
#define HW_VFIO_MONETA_TRACE_H

#include "qemu/typedefs.h"

void moneta_vfio_trace_set(bool enable);
bool moneta_vfio_trace_enabled(void);

#endif
