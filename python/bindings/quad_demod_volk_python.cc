/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(quad_demod_volk.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(9ac8ced322b4a5ff48a5afc4fdb49fe5)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <lfast/quad_demod_volk.h>
// pydoc.h is automatically generated in the build directory
#include <quad_demod_volk_pydoc.h>

void bind_quad_demod_volk(py::module& m)
{

    using quad_demod_volk    = ::gr::lfast::quad_demod_volk;


    py::class_<quad_demod_volk, gr::sync_block, gr::block, gr::basic_block,
        std::shared_ptr<quad_demod_volk>>(m, "quad_demod_volk", D(quad_demod_volk))

        .def(py::init(&quad_demod_volk::make),
           py::arg("gain"),
           D(quad_demod_volk,make)
        )
        



        ;




}








