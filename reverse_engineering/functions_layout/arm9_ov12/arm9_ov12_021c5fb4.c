
int FUN_021c5fb4(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = DAT_021d52d8;
  }
  iVar1 = (*DAT_021d52a8)();
  if (param_1 != 0) {
    (**(code **)(**(int **)(iVar1 + 100) + 0x60))(*(int **)(iVar1 + 100),param_1);
  }
  return iVar1;
}

