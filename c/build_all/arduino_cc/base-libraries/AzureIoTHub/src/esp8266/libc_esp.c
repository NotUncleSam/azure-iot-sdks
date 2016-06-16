// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if defined(ARDUINO_ARCH_ESP8266)

/*
 * AzureIoTHub doesn’t need the __ctype_ptr__ table, we define it here just to make the linker happy. 
 */
const char *__ctype_ptr__ = { 0 };

#endif // (ARDUINO_ARCH_ESP8266)