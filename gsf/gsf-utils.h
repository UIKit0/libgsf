/* vim: set sw=8: -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * gsf-utils.h: 
 *
 * Copyright (C) 2002 Jody Goldberg (jody@gnome.org)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 */

#ifndef GSF_UTILS_H
#define GSF_UTILS_H

#include <gsf/gsf.h>

G_BEGIN_DECLS

#define GSF_GET_GUINT8(p)  		   (*(guint8  const *)(p))
#define GSF_GET_GUINT16(p) GUINT16_FROM_LE((*(guint16 const *)(p)))
#define GSF_GET_GUINT32(p) GUINT32_FROM_LE((*(guint32 const *)(p)))

void gsf_init (void);
void gsf_shutdown (void);

void gsf_mem_dump (guint8 const *ptr, int len);

G_END_DECLS

#endif /* GSF_UTILS_H */
