
void FUN_021bbe54(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  FUN_021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x44) + 4));
  piVar3 = *(int **)(*(int *)(param_1 + 0x50) + 4);
  if (param_2 == 0) {
    iVar5 = 0x38;
    iVar6 = 0x50;
    (**(code **)(*piVar3 + 0x148))(piVar3,8);
  }
  else {
    iVar5 = 0x18;
    iVar6 = 0x48;
    (**(code **)(*piVar3 + 0x14c))();
  }
  sVar1 = *(short *)(param_1 + 0x56);
  sVar2 = *(short *)(param_1 + 0x5a);
  iVar4 = 0;
  do {
    local_24 = (iVar4 * iVar6 + iVar5) * 0x1000;
    local_28 = ((int)sVar1 + sVar2 * 8 + -0x20) * 0x1000;
    FUN_021bb970(*(undefined4 *)(param_1 + iVar4 * 4 + 0x48),&local_24,&local_28);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  local_30 = 0;
  local_2c = 0x100000;
  FUN_021bb970(*(undefined4 *)(param_1 + 0x44),&local_2c,&local_30);
  local_38 = 0;
  local_34 = 0;
  FUN_021bb970(*(undefined4 *)(param_1 + 0x40),&local_34,&local_38);
  FUN_021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x40) + 4));
  FUN_021b6214(*(undefined4 *)(*(int *)(param_1 + 0x40) + 4),1);
  iVar5 = 0;
  do {
    FUN_021b65e0(*(undefined4 *)(*(int *)(param_1 + iVar5 * 4 + 0x48) + 4));
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return;
}

