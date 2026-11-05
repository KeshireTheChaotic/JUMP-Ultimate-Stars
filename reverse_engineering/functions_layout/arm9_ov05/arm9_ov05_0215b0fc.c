
void FUN_0215b0fc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_2 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar1 * 4 + 0x10);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

