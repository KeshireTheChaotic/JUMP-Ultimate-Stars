
void FUN_0205b128(int param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    FUN_0205e108(iVar1,param_1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_0205e108(&DAT_020ad63c,param_1);
  *(undefined1 *)(param_1 + 0x3d) = param_2;
  if (iVar1 != 0) {
    FUN_0205b36c(iVar1,param_1);
  }
  FUN_0205b310(param_1);
  return;
}

