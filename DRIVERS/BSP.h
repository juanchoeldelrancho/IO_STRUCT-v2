/*****************************************************************************
 *  FileName:        BSP.h
 *  Dependencies:    None.
 *  Processor:       MSP432
 *  Board:           MSP432P401R
 *  Program version: CCS V10.4 TI
 *  Company:         TecNM /IT Chihuahua
 *  Description:     Incluye la capa de abstraccion de los drivers.
 *  Authors:         Alfredo Chacon
 *   Created on:     18 nov. 2021
 *   Updated:
  **/
/************************************************************************************************
 * * Copyright (C) 2021 by Alfredo Chacon - TecNM /IT Chihuahua
 *
 * Se permite la redistribucion, modificacion o uso de este software en formato fuente o binario
 * siempre que los archivos mantengan estos derechos de autor.
 * Los usuarios pueden modificar esto y usarlo para aprender sobre el campo de software embebido.
 * Alfredo Chacon y el TecNM /IT Chihuahua no son responsables del mal uso de este material.
 *************************************************************************************************/
#ifndef BSP_H_
#define BSP_H_
// Si hay problemas con los 'includes', busque la direccion o ruta.
//#include <C:/ti_v10_1/ccs/ccs_base/arm/include/msp.h>
#include "DRIVERS\gpio_2021.h"

/* Definición de botones con su respectivo puerto. */

#define LEDROJO         0x01
#define LEDRGBROJO      0x01
#define LEDRGBVERDE     0x02
#define LEDRGBAZUL      0x04
#define BOTON1          0x02
#define BOTON2          0x10
#define ENTRADA3        0x08
#define ENTRADA4        0x10
#define ENTRADA5        0x20
#define ENTRADA6        0x40
#define ENTRADA7        0x80


/* Definición de led's plasmados en tarjeta con su respectivo puerto. */


#endif /* BSP_H_ */
