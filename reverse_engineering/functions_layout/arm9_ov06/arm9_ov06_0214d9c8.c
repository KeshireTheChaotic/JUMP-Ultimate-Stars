
void FUN_0214d9c8(void)

{
  int iVar1;
  
  iVar1 = FUN_0203b3e4();
  FUN_0214da28(*(undefined4 *)(iVar1 + 0x88),1,0x3e);
  if (DAT_020afeb9 != '\0') {
    FUN_0207361c(0x26,0);
    return;
  }
  if (DAT_020aff25 == '\0') {
    FUN_0207361c((int)*(short *)(&DAT_02092d0e + *(int *)(DAT_02172960 + 0x160) * 8),0);
    return;
  }
  FUN_0207361c(0x25,0);
  return;
}

