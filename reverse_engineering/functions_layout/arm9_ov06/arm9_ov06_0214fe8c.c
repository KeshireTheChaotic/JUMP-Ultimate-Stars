
void FUN_0214fe8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x14); iVar2 = iVar2 + 1) {
    if (*(int *)(param_1 + iVar2 * 4 + 0x4c) == 0) {
      iVar1 = iVar1 + 1;
    }
  }
  if (iVar1 >= 2) {
    *(int *)(param_1 + 0x18) = iVar1;
  }
  DAT_020afee5 = iVar1 < 2;
  return;
}

