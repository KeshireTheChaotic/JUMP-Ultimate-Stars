
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e6414(void)

{
  int iVar1;
  
  iVar1 = DAT_027f97f0;
  *(uint *)(DAT_027f97f0 + 0xd0) = (uint)_DAT_0380fff0;
  if (*(int *)(iVar1 + 0xd4) != *(int *)(iVar1 + 0xd0)) {
    *(int *)(iVar1 + 0xd4) = *(int *)(iVar1 + 0xd0);
    FUN_027e6528();
  }
  if (*(uint *)(iVar1 + 0xd8) < 0x80) {
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    FUN_027e6680((int)*(short *)(iVar1 + 0x42),FUN_027e62cc,4);
  }
  else {
    FUN_027e6680(0xd0,FUN_027e63d4,2);
  }
  return;
}

