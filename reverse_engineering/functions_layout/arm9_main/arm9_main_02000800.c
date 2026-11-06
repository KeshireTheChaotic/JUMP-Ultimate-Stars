
/* WARNING: Removing unreachable block (ram,0x0200083c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK _start [structural] reset entry from ROM header; disables IME first like NitroSDK crt0 */

void _start(void)

{
  undefined4 *puVar1;
  
                    /* JUS-TAG hw={"IRQ":1,"SYSTEM_SHARED":1} io=["027fff9c","04000208"] */
  _DAT_04000208 = 0x4000000;
  init_cp15();
  INITi_CpuClear32(0,&DAT_027c0000,0x4000);
  INITi_CpuClear32(0,0x5000000,0x400);
  INITi_CpuClear32(0x200,0x7000000,0x400);
  MIi_UncompressBackward(0);
  do_autoload();
  for (puVar1 = &DAT_020a05c0; puVar1 < &SUB_0214cd20; puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  puVar1 = &DAT_020a05c0;
  do {
    coproc_moveto_Data_Synchronization(0);
    coproc_moveto_Invalidate_Instruction_Cache_by_MVA(puVar1);
    coproc_moveto_Invalidate_Data_Cache_by_MVA(puVar1);
    puVar1 = puVar1 + 8;
  } while ((int)puVar1 < 0x214cd20);
  _DAT_027fff9c = 0;
  _DAT_027c3ffc = OS_IrqHandler;
  _fp_init();
  NitroStartUp();
  __call_static_initializers();
  NitroMain();
  return;
}

