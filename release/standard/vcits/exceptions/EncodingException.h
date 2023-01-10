//
// Created by Christoph Pilz on 14.10.2021.
//
// Description:
// Exception, if something is not yet implemented
//
// Author(s): "Christoph Pilz"
// Copyright: "Copyright 2021, VIF V2X Platform"
// Credits: ["Thispointer.com"]
// License: "TBD"
// Version: "TBD"
// Maintainer: "Christoph Pilz"
// E-Mail: "christoph.pilz@v2c2.at"
// Status = "Production"
//
// Possible Improvements:
// [] License
//

#ifndef V2X_LIBRARY_ENCODINGEXCEPTION_H
#define V2X_LIBRARY_ENCODINGEXCEPTION_H

#pragma once

#include <exception>

class EncodingException : public std::runtime_error
{
public:
    EncodingException() : std::runtime_error("Encoding failed: values may be out of range") { };
};

#endif //V2X_LIBRARY_ENCODINGEXCEPTION_H
