#ifndef WINDOWS_PROCESS_H
#define WINDOWS_PROCESS_H

#include "../../Process.h"

class WindowsProcess : public Process {
  phandle_t handle;

public:
  WindowsProcess(pid_t pid);
  ~WindowsProcess();

  std::vector<MemoryPage> getCheatablePages() override;
  memory_t read(MemoryPage page) override;
  void write(address_t address, const memory_t& value) override;
};

#endif

