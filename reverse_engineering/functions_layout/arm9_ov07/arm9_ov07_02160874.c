
void FUN_02160874(void)

{
  int iVar1;
  
  iVar1 = FUN_0215e95c(DAT_0216ad8c + 0x5760,*(undefined4 *)(DAT_0216ad8c + 0x5780),0,0);
  if (iVar1 == 0) {
    iVar1 = FUN_0215e95c(DAT_0216ad8c + 0x5760,0,0,1);
  }
  *(int *)(DAT_0216ad8c + 0x5780) = iVar1;
  *(undefined4 *)(DAT_0216ad8c + 0xe8) = *(undefined4 *)(iVar1 + 4);
  return;
}

