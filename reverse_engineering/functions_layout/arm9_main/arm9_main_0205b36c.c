
void FUN_0205b36c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0205e0f0(param_1,0);
  while ((iVar1 != 0 && (*(byte *)(iVar1 + 0x3d) <= *(byte *)(param_2 + 0x3d)))) {
    iVar1 = FUN_0205e0f0(param_1);
  }
  FUN_0205e170(param_1,iVar1,param_2);
  *(undefined4 *)(param_2 + 4) = param_1;
  return;
}

