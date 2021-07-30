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
/* BINDTOOL_HEADER_FILE(malahitpp.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(aeb42f7ff2cb64854e31404d6dedec19)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <malahit/malahitpp.h>
// pydoc.h is automatically generated in the build directory
#include <malahitpp_pydoc.h>

void bind_malahitpp(py::module& m)
{

    using malahitpp    = ::gr::malahit::malahitpp;


    py::class_<malahitpp, gr::hier_block2,
        std::shared_ptr<malahitpp>>(m, "malahitpp", D(malahitpp))

        .def(py::init(&malahitpp::make),
           py::arg("device_name") = "",
           py::arg("unit") = 1,
           D(malahitpp,make)
        )
        




        .def("set_freq",&malahitpp::set_freq,
            py::arg("freq"),
            D(malahitpp,set_freq)
        )


        .def("set_lna",&malahitpp::set_lna,
            py::arg("gain"),
            D(malahitpp,set_lna)
        )


        .def("set_mixer_gain",&malahitpp::set_mixer_gain,
            py::arg("gain"),
            D(malahitpp,set_mixer_gain)
        )


        .def("set_freq_corr",&malahitpp::set_freq_corr,
            py::arg("ppm"),
            D(malahitpp,set_freq_corr)
        )


        .def("set_if_gain",&malahitpp::set_if_gain,
            py::arg("gain"),
            D(malahitpp,set_if_gain)
        )

        ;




}







