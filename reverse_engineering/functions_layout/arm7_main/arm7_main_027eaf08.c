
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eaf08(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _DAT_0380fff4;
  if (param_1 < 2) {
    *(ushort *)(_DAT_0380fff4 + 0x33a) =
         *(ushort *)(_DAT_0380fff4 + 0x33a) & 0xfffb | (ushort)((param_1 & 1) << 2);
    if (param_1 == 0) {
      *(ushort *)(iVar1 + 0x3c0) = *(ushort *)(iVar1 + 0x3c0) & 0xffdf;
    }
    else {
      *(ushort *)(iVar1 + 0x3c0) = *(ushort *)(iVar1 + 0x3c0) | 0x20;
    }
    if ((*(short *)(iVar1 + 0x34c) == 0x40) && (*(short *)(_DAT_0380fff4 + 0x32e) == 1)) {
      *(undefined2 *)(*(int *)(_DAT_0380fff4 + 0x4ac) + 0x2e) = *(undefined2 *)(iVar1 + 0x3c0);
    }
    if (param_1 == 0) {
      _DAT_048080bc = _DAT_048080bc & 0xfff9;
    }
    else {
      _DAT_048080bc = _DAT_048080bc | 6;
    }
    FUN_027ea590();
    uVar2 = 0;
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}

