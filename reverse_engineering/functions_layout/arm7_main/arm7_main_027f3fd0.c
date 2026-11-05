
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f3fd0(int param_1)

{
  int iVar1;
  int local_38 [2];
  undefined2 local_30;
  ushort local_2e;
  undefined2 local_2c;
  
  iVar1 = FUN_027f0730(param_1 + 0x1e,0x50);
  if ((iVar1 == 0) &&
     (((*(ushort *)(param_1 + 0x24) & 1) != 0 || ((*(ushort *)(param_1 + 8) & 0x8000) != 0)))) {
    MIi_CpuClear32(0,local_38,0x2c);
    local_38[0] = param_1 + 0x2c;
    local_30 = *(undefined2 *)(param_1 + 6);
    if ((*(ushort *)(_DAT_0380fff4 + 0x33a) & 3) >> 1 == 0) {
      local_2c = 0x800;
    }
    FUN_027f3248(local_38);
    if (((local_2e & 1) == 1) && (iVar1 = FUN_027f0984(param_1 + 0x1e), iVar1 != 0)) {
      FUN_027f15ac();
    }
  }
  return;
}

