//
//  MMcURLHTTPUtilities.cpp
//  MMcURLpp
//
//  Created by Manuele Maggi on 27/04/14.
//  email: manuele.maggi@gmail.com
//  Copyright (c) 2014 Manuele Maggi. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#include "MMcURLHTTPUtilities.h"

const char* MMcURL_HTTP_REQUEST_OPTION_GET      = "GET";
const char* MMcURL_HTTP_REQUEST_OPTION_POST     = "POST";
const char* MMcURL_HTTP_REQUEST_OPTION_PUT      = "PUT";
const char* MMcURL_HTTP_REQUEST_OPTION_DELETE   = "DELETE";

const char* RequestOptionWithHTTPMethod(MMcURL_HTTPMethod_t httpMethod) {
 
    const char* requesOption;
    
    switch (httpMethod) {
            
        default:
        case MMcURL_HTTPMethod_GET:
            requesOption = MMcURL_HTTP_REQUEST_OPTION_GET;
            break;
            
        case MMcURL_HTTPMethod_POST:
            requesOption = MMcURL_HTTP_REQUEST_OPTION_POST;
            break;
            
        case MMcURL_HTTPMethod_PUT:
            requesOption = MMcURL_HTTP_REQUEST_OPTION_PUT;
            break;
            
        case MMcURL_HTTPMethod_DELETE:
            requesOption = MMcURL_HTTP_REQUEST_OPTION_DELETE;
            break;
    }
    
    return requesOption;
}