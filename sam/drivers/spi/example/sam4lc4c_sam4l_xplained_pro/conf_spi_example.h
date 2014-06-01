/**
 * \file
 *
 * \brief SPI example configuration.
 *
 * Copyright (c) 2013 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

/**
 * \defgroup spi_example_pin_defs
 *  - <b> SAM4L Xplained Pro board --  SAM4L Xplained Pro board</b>
 *  - VCC -- VCC
 *  - NPCS0(PC03,EXT1/PIN15) -- NPCS0(PC03,EXT1/PIN15)
 *  - MISO(PA21,EXT1/PIN17)  -- MISO(PA21,EXT1/PIN17)
 *  - MOSI(PA22,EXT1/PIN16)  -- MOSI(PA22,EXT1/PIN16)
 *  - SPCK(PC30,EXT1/PIN18)  -- SPCK(PC30,EXT1/PIN18)
 *  - GND -- GND
 */

#ifndef CONF_SPI_EXAMPLE_H_INCLUDED
#define CONF_SPI_EXAMPLE_H_INCLUDED

#define SPI_Handler     SPI_Handler
#define SPI_IRQn        SPI_IRQn

#endif /* CONF_SPI_EXAMPLE_H_INCLUDED */