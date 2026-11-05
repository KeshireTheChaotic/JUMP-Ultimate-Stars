
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027ea36c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = _DAT_0380fff4;
  if (param_1 == 0xffff) {
    *(undefined2 *)(_DAT_0380fff4 + 0x338) = 0xff;
    *(undefined2 *)(iVar1 + 0x3d0) = 0xffff;
  }
  else {
    uVar2 = FUN_03807acc(param_1 * (uint)*(ushort *)(_DAT_0380fff4 + 0x3b2),100);
    if (0x10000 < uVar2) {
      return 5;
    }
    *(short *)(iVar1 + 0x338) = (short)param_1;
    *(short *)(iVar1 + 0x3d0) = (short)uVar2;
  }
  return 0;
}

