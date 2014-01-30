/*
 * libvirt-designer-internal.h: internal definitions just
 *                              used by code from the library
 *
 * Copyright (C) 2012 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Author: Michal Privoznik <mprivozn@redhat.com>
 */

#ifndef __LIBVIRT_DESIGNER_INTERNAL_H__
#define __LIBVIRT_DESIGNER_INTERNAL_H__

int gvir_designer_genum_get_value(GType enum_type, const char *nick, gint default_value);

#endif /* __LIBVIRT_DESIGNER_INTERNAL_H__ */
