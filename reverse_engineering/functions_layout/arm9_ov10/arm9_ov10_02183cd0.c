
undefined4 FUN_02183cd0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  
  iVar4 = *param_1;
  if (param_2 == 0) {
    iVar2 = *(int *)(iVar4 + 0x438);
    while (iVar2 != 0) {
      *(undefined4 *)(iVar4 + 0x438) = 0;
      *(undefined4 *)(iVar4 + 0x43c) = 0;
      while (iVar2 != 0) {
        iVar2 = *(int *)(iVar2 + 0x14);
        FUN_02183d94(param_1);
      }
      iVar2 = *(int *)(iVar4 + 0x438);
    }
    return 0;
  }
  local_1c = *(int *)(iVar4 + 0x438);
  local_18 = *(int *)(iVar4 + 0x43c);
  *(int *)(iVar4 + 0x438) = 0;
  *(int *)(iVar4 + 0x43c) = 0;
  iVar3 = local_1c;
  iVar2 = 0;
  while (iVar1 = iVar2, iVar2 = iVar3, iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 0x14);
    if ((*(int *)(iVar2 + 0x10) == param_2) || (*(int *)(iVar2 + 0xc) == 1)) {
      if (iVar1 == 0) {
        local_1c = iVar3;
      }
      else {
        *(int *)(iVar1 + 0x14) = iVar3;
      }
      if (local_18 == iVar2) {
        local_18 = iVar1;
      }
      FUN_02183d94(param_1);
      iVar2 = iVar1;
    }
  }
  if (*(int *)(iVar4 + 0x438) == 0) {
    *(int *)(iVar4 + 0x438) = local_1c;
    *(int *)(iVar4 + 0x43c) = local_18;
  }
  else {
    *(int *)(*(int *)(iVar4 + 0x43c) + 0x14) = local_1c;
    *(int *)(iVar4 + 0x43c) = local_18;
  }
  return 0;
}

