
void FUN_0203616c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x1c))();
  piVar2 = *(int **)(param_1 + 0x1c);
  if (iVar1 == 0x52544e43) {
    (**(code **)(*piVar2 + 0x4c))(piVar2,param_2,param_3,param_4,uVar3);
    return;
  }
  (**(code **)(*piVar2 + 0x10))();
  iVar1 = FUN_0201a228(0x18);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar3 = jus_TagCNTR::jus_TagCNTR(iVar1,param_2,param_3,param_4,1);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  return;
}

