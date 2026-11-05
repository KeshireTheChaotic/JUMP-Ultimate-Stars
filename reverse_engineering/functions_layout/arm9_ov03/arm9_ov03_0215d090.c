
void FUN_0215d090(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(iVar2 + 0xb0) == 0) {
    *(undefined4 *)(iVar2 + 0xb0) = 6;
  }
  iVar1 = FUN_0200d12c(*(int *)(iVar2 + 0xb0) * 0xa0,100);
  *(int *)(iVar2 + 0xb0) = iVar1;
  local_10 = (iVar1 + -0x20) * 0x1000;
  FUN_0215ce90(param_1,&local_10);
  FUN_0215ceb0(&local_14,param_1);
  if (0x80000 < local_14) {
    local_18 = 0x80000;
    FUN_0215ce90(param_1,&local_18);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215d1fc);
    FUN_0215d134(*(undefined4 *)(iVar2 + 8),0);
  }
  return;
}

