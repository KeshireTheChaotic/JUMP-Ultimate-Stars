
void FUN_02189644(int param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + param_2) = 0;
  iVar1 = FUN_02004cec(param_1,s__pauthr__021a64f4,8);
  if (iVar1 == 0) {
    FUN_02189850(param_1,param_2);
    return;
  }
  iVar1 = FUN_02004cec(param_1,s__getpidr__021a6500,9);
  if (iVar1 == 0) {
    FUN_021897ec(param_1,param_2);
    return;
  }
  iVar1 = FUN_02004cec(param_1,s__getpidr__021a6500,9);
  if (iVar1 == 0) {
    FUN_021897ec(param_1,param_2);
    return;
  }
  iVar1 = FUN_02004cec(param_1,s__getpdr__021a650c,8);
  if (iVar1 == 0) {
    FUN_0218974c(param_1,param_2);
    return;
  }
  iVar1 = FUN_02004cec(param_1,s__setpdr__021a6518,8);
  if (iVar1 == 0) {
    FUN_021896e0(param_1,param_2);
  }
  return;
}

