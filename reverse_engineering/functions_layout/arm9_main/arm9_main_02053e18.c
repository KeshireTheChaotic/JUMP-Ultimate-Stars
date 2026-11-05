
void FUN_02053e18(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    return;
  }
  do {
    iVar1 = FUN_0205383c(param_1 + 0x88);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    FUN_02053210();
  } while (*(int *)(param_1 + 0x88) != 0);
  return;
}

