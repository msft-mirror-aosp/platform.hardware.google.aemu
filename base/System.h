#include "base/CpuTime.h"

#include <string>

namespace android {
namespace base {

std::string getEnvironmentVariable(const std::string& key);
void setEnvironmentVariable(const std::string& key, const std::string& value);
bool isVerboseLogging();

uint64_t getUnixTimeUs();
uint64_t getHighResTimeUs();

std::string getProgramDirectory();
std::string getLauncherDirectory();

uint64_t getFileSize(int fd, uint64_t* size);

void sleepMs(uint64_t ms);
void sleepUs(uint64_t us);

CpuTime cpuTime();

} // namespace base
} // namespace android
