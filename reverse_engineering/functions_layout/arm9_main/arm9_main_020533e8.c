
void FUN_020533e8(void)

{
  int iVar1;
  
  iVar1 = *DAT_020aab6c;
  FUN_02052e00();
  FUN_02053e18(iVar1);
  if (*(int *)(iVar1 + 0x78) != 0) {
    FUN_0205386c(*(int *)(iVar1 + 0x78),iVar1);
  }
  FUN_0205378c(iVar1);
  *(undefined4 *)(iVar1 + 100) = 2;
  FUN_02053210(iVar1 + 0x9c);
  FUN_02052dc8();
  FUN_020530c4();
  FUN_02055684();
  return;
}

