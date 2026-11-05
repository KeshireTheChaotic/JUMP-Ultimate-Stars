
void FUN_02159694(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0200d338(param_2 - (param_1 + 0x10),0xdc);
  if (*(int *)(param_1 + 0xa60) < 0 || iVar1 < *(int *)(param_1 + 0xa60)) {
    *(int *)(param_1 + 0xa60) = iVar1;
  }
  return;
}

