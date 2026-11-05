
void FUN_0202a658(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    FUN_0202a658(iVar1);
  }
  return;
}

