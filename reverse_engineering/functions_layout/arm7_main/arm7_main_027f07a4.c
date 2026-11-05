
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f07a4(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  MIi_CpuClear16(0,param_1,0x2c);
  uVar1 = FUN_027e9bd4();
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  FUN_027ea048(param_1 + 0x18,param_2,_DAT_0380fff4 + 0x324,_DAT_0380fff4 + 0x3a8);
  return;
}

