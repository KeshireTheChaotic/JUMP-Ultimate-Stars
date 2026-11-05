
/* WARNING: Removing unreachable block (ram,0x02061764) */
/* WARNING: Removing unreachable block (ram,0x0206176a) */
/* WARNING: Removing unreachable block (ram,0x02061742) */
/* WARNING: Removing unreachable block (ram,0x0206175c) */
/* WARNING: Removing unreachable block (ram,0x02061772) */
/* WARNING: Removing unreachable block (ram,0x02061788) */
/* WARNING: Removing unreachable block (ram,0x02061796) */
/* WARNING: Removing unreachable block (ram,0x020617a8) */
/* WARNING: Removing unreachable block (ram,0x020617b4) */
/* WARNING: Removing unreachable block (ram,0x020617b6) */
/* WARNING: Removing unreachable block (ram,0x020617ba) */
/* WARNING: Removing unreachable block (ram,0x020617ce) */
/* WARNING: Removing unreachable block (ram,0x020617c0) */
/* WARNING: Removing unreachable block (ram,0x020617d4) */
/* WARNING: Removing unreachable block (ram,0x020617e0) */
/* WARNING: Removing unreachable block (ram,0x020617fc) */
/* WARNING: Removing unreachable block (ram,0x02061800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020616a8(uint param_1)

{
  undefined4 uVar1;
  undefined1 local_24 [4];
  undefined1 local_20 [12];
  
                    /* JUS-TAG hw={"GX_2D_main":1,"GX_2D_sub":1,"SYSTEM_SHARED":2,"IRQ":2}
                       io=["027ffc3c","027ffc40","04000000","04000208","04000214","04001000"] */
  FUN_020614bc(DAT_020aebc4);
  _DAT_04000208 = 0;
  uVar1 = OS_DisableInterrupts();
  FUN_02051d14(0x3fffff);
  FUN_02051d94(0x40000);
  OS_RestoreInterrupts(uVar1);
  _DAT_04000208 = 1;
  if (((param_1 & 8) != 0) && (_DAT_027ffc40 == 2)) {
    param_1 = param_1 & 0xfffffff7;
  }
  if ((param_1 & 0x10) != 0) {
    FUN_02062f60();
  }
  FUN_020615ec();
  FUN_02061864(local_24,local_20);
  FUN_02061980(2,0);
  do {
  } while( true );
}

