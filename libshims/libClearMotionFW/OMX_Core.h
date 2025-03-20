/*
 * Copyright (c) 2016 The Khronos Group Inc.
 * Copyright (c) 2025 The Snowdroid Project
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject
 * to the following conditions:
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 */


/** The OMX_ERRORTYPE enumeration defines the standard OMX Errors.  These
 *  errors should cover most of the common failure cases.  However,
 *  vendors are free to add additional error messages of their own as
 *  long as they follow these rules:
 *  1.  Vendor error messages shall be in the range of 0x90000000 to
 *      0x9000FFFF.
 *  2.  Vendor error messages shall be defined in a header file provided
 *      with the component.  No error messages are allowed that are
 *      not defined.
 */
typedef enum OMX_ERRORTYPE
{
  OMX_ErrorNone = 0,

  /** There were insufficient resources to perform the requested operation */
  OMX_ErrorInsufficientResources = (OMX_S32) 0x80001000,

  /** There was an error, but the cause of the error could not be determined */
  OMX_ErrorUndefined = (OMX_S32) 0x80001001,

  /** The component name string was not valid */
  OMX_ErrorInvalidComponentName = (OMX_S32) 0x80001002,

  /** No component with the specified name string was found */
  OMX_ErrorComponentNotFound = (OMX_S32) 0x80001003,

  /** The component specified did not have a "OMX_ComponentInit" or
      "OMX_ComponentDeInit entry point */
  OMX_ErrorInvalidComponent = (OMX_S32) 0x80001004,

  /** One or more parameters were not valid */
  OMX_ErrorBadParameter = (OMX_S32) 0x80001005,

  /** The requested function is not implemented */
  OMX_ErrorNotImplemented = (OMX_S32) 0x80001006,

  /** The buffer was emptied before the next buffer was ready */
  OMX_ErrorUnderflow = (OMX_S32) 0x80001007,

  /** The buffer was not available when it was needed */
  OMX_ErrorOverflow = (OMX_S32) 0x80001008,

  /** The hardware failed to respond as expected */
  OMX_ErrorHardware = (OMX_S32) 0x80001009,

  /** The component is in the state OMX_StateInvalid */
  OMX_ErrorInvalidState = (OMX_S32) 0x8000100A,

  /** Stream is found to be corrupt */
  OMX_ErrorStreamCorrupt = (OMX_S32) 0x8000100B,

  /** Ports being connected are not compatible */
  OMX_ErrorPortsNotCompatible = (OMX_S32) 0x8000100C,

  /** Resources allocated to an idle component have been
      lost resulting in the component returning to the loaded state */
  OMX_ErrorResourcesLost = (OMX_S32) 0x8000100D,

  /** No more indicies can be enumerated */
  OMX_ErrorNoMore = (OMX_S32) 0x8000100E,

  /** The component detected a version mismatch */
  OMX_ErrorVersionMismatch = (OMX_S32) 0x8000100F,

  /** The component is not ready to return data at this time */
  OMX_ErrorNotReady = (OMX_S32) 0x80001010,

  /** There was a timeout that occurred */
  OMX_ErrorTimeout = (OMX_S32) 0x80001011,

  /** This error occurs when trying to transition into the state you are already in */
  OMX_ErrorSameState = (OMX_S32) 0x80001012,

  /** Resources allocated to an executing or paused component have been
      preempted, causing the component to return to the idle state */
  OMX_ErrorResourcesPreempted = (OMX_S32) 0x80001013,

  /** A non-supplier port sends this error to the IL client (via the EventHandler callback)
      during the allocation of buffers (on a transition from the LOADED to the IDLE state or
      on a port restart) when it deems that it has waited an unusually long time for the supplier
      to send it an allocated buffer via a UseBuffer call. */
  OMX_ErrorPortUnresponsiveDuringAllocation = (OMX_S32) 0x80001014,

  /** A non-supplier port sends this error to the IL client (via the EventHandler callback)
      during the deallocation of buffers (on a transition from the IDLE to LOADED state or
      on a port stop) when it deems that it has waited an unusually long time for the supplier
      to request the deallocation of a buffer header via a FreeBuffer call. */
  OMX_ErrorPortUnresponsiveDuringDeallocation = (OMX_S32) 0x80001015,

  /** A supplier port sends this error to the IL client (via the EventHandler callback)
      during the stopping of a port (either on a transition from the IDLE to LOADED
      state or a port stop) when it deems that it has waited an unusually long time for
      the non-supplier to return a buffer via an EmptyThisBuffer or FillThisBuffer call. */
  OMX_ErrorPortUnresponsiveDuringStop = (OMX_S32) 0x80001016,

  /** Attempting a state transtion that is not allowed */
  OMX_ErrorIncorrectStateTransition = (OMX_S32) 0x80001017,

  /* Attempting a command that is not allowed during the present state. */
  OMX_ErrorIncorrectStateOperation = (OMX_S32) 0x80001018,

  /** The values encapsulated in the parameter or config structure are not supported. */
  OMX_ErrorUnsupportedSetting = (OMX_S32) 0x80001019,

  /** The parameter or config indicated by the given index is not supported. */
  OMX_ErrorUnsupportedIndex = (OMX_S32) 0x8000101A,

  /** The port index supplied is incorrect. */
  OMX_ErrorBadPortIndex = (OMX_S32) 0x8000101B,

  /** The port has lost one or more of its buffers and it thus unpopulated. */
  OMX_ErrorPortUnpopulated = (OMX_S32) 0x8000101C,

  /** Component suspended due to temporary loss of resources */
  OMX_ErrorComponentSuspended = (OMX_S32) 0x8000101D,

  /** Component suspended due to an inability to acquire dynamic resources */
  OMX_ErrorDynamicResourcesUnavailable = (OMX_S32) 0x8000101E,

  /** When the macroblock error reporting is enabled the component returns new error
     for every frame that has errors */
  OMX_ErrorMbErrorsInFrame = (OMX_S32) 0x8000101F,

  /** A component reports this error when it cannot parse or determine the format of an input stream. */
  OMX_ErrorFormatNotDetected = (OMX_S32) 0x80001020,

  /** The content open operation failed. */
  OMX_ErrorContentPipeOpenFailed = (OMX_S32) 0x80001021,

  /** The content creation operation failed. */
  OMX_ErrorContentPipeCreationFailed = (OMX_S32) 0x80001022,

  /** Separate table information is being used */
  OMX_ErrorSeperateTablesUsed = (OMX_S32) 0x80001023,

  /** Tunneling is unsupported by the component*/
  OMX_ErrorTunnelingUnsupported = (OMX_S32) 0x80001024,

  OMX_ErrorKhronosExtensions = (OMX_S32) 0x8F000000, /**< Reserved region for introducing Khronos Standard Extensions */
  OMX_ErrorVendorStartUnused = (OMX_S32) 0x90000000, /**< Reserved region for introducing Vendor Extensions */
  OMX_ErrorMax = 0x7FFFFFFF
}OMX_ERRORTYPE;