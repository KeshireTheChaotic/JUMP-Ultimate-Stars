
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027eb434(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(_DAT_0380fff4 + 0x3e0);
  MIi_CpuClear16(0,_DAT_0380fff4 + 0x31c,0x28);
  MIi_CpuClear16(0,_DAT_0380fff4 + 0x344,0xc0);
  *(undefined4 *)(_DAT_0380fff4 + 0x31c) = param_1;
  *(undefined2 *)(_DAT_0380fff4 + 800) = param_2;
  *(undefined2 *)(_DAT_0380fff4 + 0x322) = param_2;
  *(undefined4 *)(_DAT_0380fff4 + 0x3e0) = uVar1;
  return;
}

