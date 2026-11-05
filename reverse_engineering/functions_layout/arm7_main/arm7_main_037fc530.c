
void FUN_037fc530(void)

{
  int iVar1;
  
  iVar1 = *DAT_038082d0;
  FUN_037fc140();
  FUN_037fcd78(iVar1);
  if (*(int *)(iVar1 + 0x5c) != 0) {
    FUN_037fc964(*(int *)(iVar1 + 0x5c),iVar1);
  }
  FUN_037fc884(iVar1);
  *(undefined4 *)(iVar1 + 0x48) = 2;
  FUN_037fc460(iVar1 + 0x80);
  FUN_037fc108();
  FUN_037fc320();
  FUN_037fe538();
  return;
}

