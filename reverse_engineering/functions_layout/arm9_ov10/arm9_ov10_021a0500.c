
void FUN_021a0500(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  uStack_18 = param_4;
  uVar1 = FUN_0219b93c(uVar4);
  iVar2 = FUN_0219b96c(uVar4);
  iVar3 = FUN_0219b99c(uVar4);
  local_1c = iVar2 << 0xc;
  FUN_021a0570(param_1,&local_1c);
  local_20 = iVar3 << 0xc;
  FUN_021a05cc(param_1,&local_20);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x80) = uVar1;
  return;
}

