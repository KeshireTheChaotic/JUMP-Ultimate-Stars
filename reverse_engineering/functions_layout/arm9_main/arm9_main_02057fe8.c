
int FUN_02057fe8(void)

{
  int iVar1;
  
  iVar1 = FUN_02058044();
  if (iVar1 != 0) {
    return iVar1;
  }
  DC_InvalidateRange(*(undefined4 *)(DAT_020acae8 + 4),2);
  if (**(ushort **)(DAT_020acae8 + 4) < 2) {
    iVar1 = 3;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

