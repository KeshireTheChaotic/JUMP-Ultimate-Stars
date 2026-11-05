
void FUN_03802424(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2 * 8 + 0x18);
  if ((iVar1 != 0) && (param_3 < *(uint *)(iVar1 + 0x38))) {
    FUN_0380258c(iVar1,param_3);
  }
  return;
}

