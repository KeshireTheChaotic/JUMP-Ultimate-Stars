
void FUN_02165d48(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(iVar1 + 0x1c) == param_2) {
    return;
  }
  *(int *)(iVar1 + 0x1c) = param_2;
  FUN_02028384(*(undefined4 *)(param_1 + 4),(&PTR_FUN_02168bd4)[param_2],&PTR_FUN_02168bd4,iVar1,
               param_4);
  return;
}

