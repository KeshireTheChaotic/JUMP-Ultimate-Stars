
/* WARNING: Removing unreachable block (ram,0x0200083c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK _start [structural] reset entry from ROM header; disables IME first like NitroSDK crt0 */

void _start(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
                    /* JUS-TAG hw={"IRQ":1,"SYSTEM_SHARED":1} io=["027fff9c","04000208"] */
  _DAT_04000208 = 0x4000000;
  init_cp15();
  INITi_CpuClear32(0,&DAT_027c0000,0x4000);
  INITi_CpuClear32(0,0x5000000,0x400);
  INITi_CpuClear32(0x200,0x7000000,0x400);
  MIi_UncompressBackward(0);
  do_autoload();
  puVar1 = &DAT_020a05c0;
  for (puVar2 = puVar1; puVar2 < &SUB_0214cd20; puVar2 = puVar2 + 1) {
    *puVar2 = 0;
  }
  puVar2 = &DAT_020a05c0;
  do {
    coproc_moveto_Data_Synchronization(0);
    coproc_moveto_Invalidate_Instruction_Cache_by_MVA(puVar2);
    coproc_moveto_Invalidate_Data_Cache_by_MVA(puVar2);
    puVar2 = puVar2 + 8;
  } while ((int)puVar2 < 0x214cd20);
  _DAT_027fff9c = 0;
  _DAT_027c3ffc = OS_IrqHandler;
  _fp_init();
  NitroStartUp();
  __call_static_initializers();
  uRam027c3b74 = 0xffff0000;
  puRam027c3b70 = puVar1;
  FUN_0206dd74();
  DAT_020a1098 = 0x27c3b6c;
  DAT_020a0f94 = 0x27c1d70;
  uRam027c1d70 = 0xdddddddd;
  DAT_020a0f90 = 0x27c3b6c;
  uRam027c3b6c = 0xbbbbbbbb;
  FUN_020430c4();
  FUN_0206ddb4();
  FUN_02055684();
  return;
}

