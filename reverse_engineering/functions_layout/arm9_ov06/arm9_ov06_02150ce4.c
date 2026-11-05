
void FUN_02150ce4(int param_1)

{
  int iVar1;
  
  FUN_0215044c();
  for (iVar1 = 1; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    *(undefined4 *)(param_1 + iVar1 * 4 + 0x1c) = DAT_020afea8;
  }
  return;
}

