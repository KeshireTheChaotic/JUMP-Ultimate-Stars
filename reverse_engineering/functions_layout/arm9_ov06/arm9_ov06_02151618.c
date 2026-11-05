
undefined4 FUN_02151618(void)

{
  int iVar1;
  
  for (iVar1 = 1; iVar1 < *(int *)(DAT_02172960 + 0x158); iVar1 = iVar1 + 1) {
    FUN_020783cc(*(undefined4 *)(*(int *)(DAT_02172960 + iVar1 * 4 + 0xdc) + 0x1b4),0x4000);
  }
  if ((*(uint *)(*(int *)(*(int *)(*(int *)(DAT_02172960 + 0xdc) + 0x1a8) + 0x10) + 0x44) & 8) == 0)
  {
    return 0;
  }
  return 1;
}

