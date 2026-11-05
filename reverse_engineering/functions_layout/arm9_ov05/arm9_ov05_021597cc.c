
void FUN_021597cc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((iVar1 != 0) || (*(int *)(param_1 + 0xc) == 0)) {
      FUN_02159810(*(undefined4 *)(param_1 + iVar1 * 4 + 0x50),param_2);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

