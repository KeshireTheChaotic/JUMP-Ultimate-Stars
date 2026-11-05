
void FUN_021c3aa8(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  piVar1 = (int *)FUN_02028920(0);
  iVar2 = FUN_020208ec(0);
  iVar5 = 0;
  uVar3 = *(uint *)(*piVar1 + *(int *)(*piVar1 + 0x70) * 4 + 0x18);
  iVar6 = 0;
  if ((uVar3 & 1) != 0) {
    iVar6 = 2;
  }
  if ((uVar3 & 2) != 0) {
    iVar6 = iVar6 + -2;
  }
  if ((uVar3 & 8) != 0) {
    iVar5 = 2;
  }
  if ((uVar3 & 4) != 0) {
    iVar5 = iVar5 + -2;
  }
  iVar4 = (**(code **)(**(int **)(iVar2 + 4) + 0x130))();
  if (iVar4 == 0) {
    iVar4 = (**(code **)(**(int **)(iVar2 + 4) + 0x128))();
    if (iVar4 != 0) {
      FUN_021bda7c(&local_20,iVar2);
      iVar4 = (int)(local_20 + ((uint)(local_20 >> 0xb) >> 0x14)) >> 0xc;
      FUN_021bd8a4(&local_24,iVar2);
      iVar2 = (int)(local_24 + ((uint)(local_24 >> 0xb) >> 0x14)) >> 0xc;
      iVar5 = iVar5 + (iVar4 - *(int *)(iVar7 + 0x94));
      iVar6 = iVar6 + (iVar2 - *(int *)(iVar7 + 0x98));
      *(int *)(iVar7 + 0x94) = iVar4;
      *(int *)(iVar7 + 0x98) = iVar2;
    }
  }
  else {
    FUN_021bda7c(&local_18,iVar2);
    *(int *)(iVar7 + 0x94) = (int)(local_18 + ((uint)(local_18 >> 0xb) >> 0x14)) >> 0xc;
    FUN_021bd8a4(&local_1c,iVar2);
    *(int *)(iVar7 + 0x98) = (int)(local_1c + ((uint)(local_1c >> 0xb) >> 0x14)) >> 0xc;
  }
  if ((iVar5 != 0) || (iVar6 != 0)) {
    FUN_021c3488(iVar7,iVar5,iVar6);
  }
  return;
}

