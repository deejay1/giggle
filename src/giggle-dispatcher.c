/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * Copyright (C) 2007 Imendio AB
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <config.h>

#include "giggle-dispatcher.h"

typedef struct GiggleDispatcherPriv GiggleDispatcherPriv;

struct GiggleDispatcherPriv {
	guint i;
};

static void giggle_dispatcher_finalize (GObject *object);

G_DEFINE_TYPE (GiggleDispatcher, giggle_dispatcher, G_TYPE_OBJECT);

static void
giggle_dispatcher_class_init (GiggleDispatcherClass *class)
{
	GObjectClass *object_class = G_OBJECT_CLASS (class);

	object_class->finalize = giggle_dispatcher_finalize;

	g_type_class_add_private (object_class, sizeof (GiggleDispatcherPriv));
}

static void
giggle_dispatcher_init (GiggleDispatcher *dispatcher)
{
}

static void
giggle_dispatcher_finalize (GObject *object)
{
	/* FIXME: Free object data */

	G_OBJECT_CLASS (giggle_dispatcher_parent_class)->finalize (object);
}

