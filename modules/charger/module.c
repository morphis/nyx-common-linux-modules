/**
 * This file is part of nyx-crespo-modules.
 *
 * Copyright (C) 2012 Simon Busch <morphis@gravedo.de>
 *
 * nyx-crespo-modules is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libsamsung-ipc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libsamsung-ipc.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <nyx/nyx_module.h>

NYX_DECLARE_MODULE(NYX_DEVICE_CHARGER, "CommonLinuxCharger")

nyx_error_t nyx_module_open (nyx_instance_t instance, nyx_device_t** device_ptr)
{
    return NYX_ERROR_NONE;
}

nyx_error_t nyx_module_close (nyx_device_t* device)
{
    return NYX_ERROR_NONE;
}

// vim:ts=4:sw=4:expandtab
