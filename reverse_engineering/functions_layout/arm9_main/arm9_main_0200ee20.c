
void FUN_0200ee20(int *param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    param_3 = (code *)param_1[2];
  }
  if (iVar1 != 0 && param_3 != (code *)0x0) {
    (*param_3)(iVar1,0xffffffff,param_3,param_4,param_4);
    return;
  }
  return;
}

