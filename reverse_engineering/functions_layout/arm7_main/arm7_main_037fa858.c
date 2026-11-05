
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fa858(void)

{
  int iVar1;
  short *psVar2;
  bool bVar3;
  
  iVar1 = _DAT_0380fff4;
  psVar2 = (short *)(_DAT_0380fff4 + 0x42c);
  bVar3 = false;
  FUN_027f1908(2);
  FUN_027f1908(1);
  FUN_027f1908(0);
  if ((*(short *)(iVar1 + 0x454) != 0) && (bVar3 = **(short **)(iVar1 + 0x45c) != 0, !bVar3)) {
    *(undefined2 *)(iVar1 + 0x454) = 0;
  }
  if (*(short *)(iVar1 + 0x440) != 0) {
    if (**(short **)(iVar1 + 0x448) == 0) {
      *(undefined2 *)(iVar1 + 0x440) = 0;
    }
    else {
      bVar3 = true;
    }
  }
  if (*psVar2 != 0) {
    if (**(short **)(iVar1 + 0x434) == 0) {
      *psVar2 = 0;
    }
    else {
      bVar3 = true;
    }
  }
  if (bVar3) {
    FUN_037f85f8(0,0xe);
  }
  FUN_037f85f8(0,0x14);
  return;
}

