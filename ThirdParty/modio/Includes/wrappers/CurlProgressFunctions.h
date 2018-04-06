#ifndef MODIO_CURL_PROGRESS_FUNCTIONS_H
#define MODIO_CURL_PROGRESS_FUNCTIONS_H

#include "wrappers/CurlUtility.h"

namespace modio
{
namespace curlwrapper
{
i32 onModDownloadProgress(void *clientp, double dltotal, double dlnow, double ultotal, double ulnow);
}
}

#endif