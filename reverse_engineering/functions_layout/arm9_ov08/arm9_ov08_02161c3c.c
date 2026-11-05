
void FUN_02161c3c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0216e7f0 + param_1 * 0x100;
  FUN_020517fc(iVar1,0,0xef);
  *(undefined1 *)(iVar1 + 0xe7) = 0xff;
  FUN_02161ad8(param_1);
  return;
}

