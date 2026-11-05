
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1664(void)

{
  short sVar1;
  int iVar2;
  
  iVar2 = _DAT_0380fff4;
  sVar1 = *(short *)(_DAT_0380fff4 + 0x350);
  if (sVar1 == 1) {
    FUN_027f15cc(0,1);
    FUN_027f15cc(1,0);
    FUN_027f15cc(2,1);
    if (*(short *)(iVar2 + 0x468) != 0) {
      *(undefined2 *)(iVar2 + 0x468) = 0;
      *(short *)(iVar2 + 0x46a) = *(short *)(iVar2 + 0x46a) + -1;
      FUN_037f89b8(_DAT_0380fff4 + 0x188,*(undefined4 *)(iVar2 + 0x4bc));
    }
  }
  else if ((sVar1 == 2) || (sVar1 == 3)) {
    FUN_027f15cc(0,1);
    FUN_027f15cc(1,0);
    FUN_027f15cc(2,0);
  }
  else {
    FUN_027f15cc(0,0);
    FUN_027f15cc(1,0);
    FUN_027f15cc(2,0);
  }
  return;
}

