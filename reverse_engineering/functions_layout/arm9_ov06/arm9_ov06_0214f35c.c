
void FUN_0214f35c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  FUN_0214f068(&local_10,*(undefined4 *)(param_1 + *(char *)(param_1 + 0x9a) * 4 + 0x1c));
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 4) + 0x50);
  *(undefined4 *)(iVar1 + 0x10) = local_10;
  FUN_0214f1cc(iVar1,1);
  if (param_2 == 0) {
    return;
  }
  FUN_0207342c(0x78,3);
  return;
}

