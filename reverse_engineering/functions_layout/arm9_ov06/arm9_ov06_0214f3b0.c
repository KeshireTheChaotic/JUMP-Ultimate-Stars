
void FUN_0214f3b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0214f208(*(undefined4 *)(param_1 + 0x60));
  FUN_0214f208(*(undefined4 *)(param_1 + 100),param_2);
  iVar1 = 0;
  do {
    FUN_0214f208(*(undefined4 *)(param_1 + iVar1 * 4 + 0x68),param_2);
    FUN_0214f208(*(undefined4 *)(param_1 + iVar1 * 4 + 0x78),param_2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

