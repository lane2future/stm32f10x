SET PATH=C:\Keil_v5\ARM\ARMCC\Bin;D:\software\vm\bin\;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\Program Files\NVIDIA Corporation\NVIDIA NvDLISR;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\;C:\WINDOWS\System32\OpenSSH\;D:\download\bandzip\Bandizip\;C:\Program Files (x86)\Git\cmd;C:\Users\lane\AppData\Local\Microsoft\WindowsApps;;C:\Users\lane\AppData\Local\Programs\Microsoft VS Code\bin
SET CPU_TYPE=STM32F103ZE
SET CPU_VENDOR=STMicroelectronics
SET UV2_TARGET=Stm32
SET CPU_CLOCK=0x00B71B00
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\core_cm3.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmAsm" --Via ".\objects\startup_stm32f10x_hd._ia"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\system_stm32f10x.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\led.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\beep.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\key.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\sys.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\delay.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmCC" --Via ".\objects\main.__i"
"C:\Keil_v5\ARM\ARMCC\Bin\ArmLink" --Via ".\Objects\STM32.lnp"
"C:\Keil_v5\ARM\ARMCC\Bin\fromelf.exe" ".\Objects\STM32.axf" --i32combined --output ".\Objects\STM32.hex"
