
void FUN_020275ec(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(char *)((int)param_1 + 0x29) < '\0') {
    iVar3 = param_1[0xd] + 0x10;
    iVar2 = *(int *)(param_1[0xd] + 0x218);
    iVar4 = iVar3 + iVar2 * 4;
    iVar3 = iVar3 + iVar2 * 0x100;
    for (iVar2 = 0; iVar2 < *(int *)(iVar4 + 0x200); iVar2 = iVar2 + 1) {
      if (*(int **)(iVar3 + iVar2 * 4) == param_1) {
        *(undefined4 *)(iVar3 + iVar2 * 4) =
             *(undefined4 *)(iVar3 + *(int *)(iVar4 + 0x200) * 4 + -4);
        *(int *)(iVar4 + 0x200) = *(int *)(iVar4 + 0x200) + -1;
      }
    }
  }
  else {
    piVar1 = (int *)FUN_0201b45c();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))();
    }
    (**(code **)(*param_1 + 100))();
    (**(code **)(*param_1 + 0x50))(param_1,1);
  }
  (**(code **)(*param_1 + 0x5c))();
  while (1 < *(ushort *)(param_1 + 1)) {
    (**(code **)(*param_1 + 0xc))();
  }
  iVar2 = FUN_0203184c(param_1[0xd] + 0x10,param_1[0xd],param_1);
  if (iVar2 != 0) {
    return;
  }
  iVar2 = param_1[0xd];
  uVar5 = *(int *)(iVar2 + 0x218) + 1U & 1;
  iVar4 = *(int *)(iVar2 + 0x10 + uVar5 * 4 + 0x200);
  if (iVar4 < 0x40) {
    *(int *)(iVar2 + 0x210 + uVar5 * 4) = *(int *)(iVar2 + 0x210 + uVar5 * 4) + 1;
    *(int **)(iVar2 + 0x10 + uVar5 * 0x100 + iVar4 * 4) = param_1;
    return;
  }
  return;
}

