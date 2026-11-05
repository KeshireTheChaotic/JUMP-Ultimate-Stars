
void FUN_0215cab4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = func_0x021a315c();
  if ((iVar2 != 0) && (iVar2 = func_0x021a3264(), iVar2 != 0)) {
    FUN_0215cbcc(iVar4);
    return;
  }
  iVar2 = func_0x021a315c();
  if (((iVar2 != 0) && (iVar2 = func_0x021a3348(), iVar2 != 0)) ||
     ((iVar2 = func_0x021a315c(), iVar2 == 0 && (*(char *)(iVar4 + 0x7d) != '\0')))) {
LAB_0215caf4:
    uVar3 = FUN_0214dd50();
    FUN_0214dd60(uVar3,1);
    iVar2 = func_0x0219ad4c();
    if (((iVar2 != 0) || (*(char *)(iVar4 + 0x7e) != '\0')) || (iVar2 = FUN_02070f88(), iVar2 != 0))
    {
      FUN_021516f0(*(undefined4 *)(iVar4 + 0x5c),0x10);
    }
    FUN_0215cbcc(iVar4);
    return;
  }
  iVar2 = func_0x0219a93c();
  if ((iVar2 == 0) && (iVar2 = func_0x0219a18c(), iVar2 == 0)) {
    if (*(char *)(iVar4 + 0x7d) != '\0') {
      FUN_0215cba0(iVar4,0);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0x28) + 4),1);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0x30) + 4),1);
      *(undefined1 *)(iVar4 + 0x7d) = 0;
    }
    if (*(char *)(iVar4 + 0x7c) != '\0') {
      iVar2 = func_0x021a315c();
      if (iVar2 == 0) goto LAB_0215caf4;
      func_0x0219bd9c();
      *(undefined1 *)(iVar4 + 0x7c) = 0;
      *(undefined1 *)(iVar4 + 0x7d) = 1;
      uVar1 = func_0x0219ad8c();
      *(undefined1 *)(iVar4 + 0x7e) = uVar1;
      FUN_0215cba0(iVar4,1);
    }
  }
  return;
}

