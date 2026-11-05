
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ebc18(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(_DAT_0380fff4 + 0x31c) + param_1 * 0x1c;
  if (*(short *)(*(int *)(_DAT_0380fff4 + 0x31c) + param_1 * 0x1c) == 0) {
    *(short *)(_DAT_0380fff4 + 0x52c) = *(short *)(_DAT_0380fff4 + 0x52c) + 1;
  }
  MIi_CpuClear16(0,iVar1,0x1a);
  *(ushort *)(_DAT_0380fff4 + 0x534) =
       *(ushort *)(_DAT_0380fff4 + 0x534) & ~(ushort)(1 << (param_1 & 0xff));
  FUN_027ec4e4(param_1 & 0xffff,0);
  FUN_027ec480(param_1);
  FUN_027ea0c8(iVar1 + 4,param_2);
  *(undefined2 *)(iVar1 + 0x14) = 0xffff;
  *(undefined2 *)(iVar1 + 0x10) = *(undefined2 *)(_DAT_0380fff4 + 0x3a6);
  *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(iVar1 + 0x1a);
  FUN_027ec560(param_1 & 0xffff,0x20);
  return;
}

