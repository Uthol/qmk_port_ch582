/*
Copyright 2022 Huckies <https://github.com/Huckies>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define CH58xBLE_ROM            1
#define LIB_FLASH_BASE_ADDRESSS 0x00040000

#define IAP_CODE_START_ADDR     0x00000000
#define APP_SECTOR_START_ADDR   0x00012000
#define APP_CODE_START_ADDR     (APP_SECTOR_START_ADDR + 0x1000)
#define APP_CODE_END_ADDR       LIB_FLASH_BASE_ADDRESSS
