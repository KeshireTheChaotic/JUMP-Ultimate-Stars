
void FUN_0215508c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(param_1 + 0x35f); iVar3 = iVar3 + 1) {
    iVar7 = iVar3 * 0x28 + param_1;
    iVar5 = *(int *)(*(int *)(iVar7 + 0xd8) + 4);
    if ((*(uint *)(iVar5 + 0x90) & 8) != 8) {
      iVar5 = *(int *)(iVar5 + 0x124) * 0x48 + *(int *)(*(int *)(param_1 + 0x330) + 0x34);
      if ((*(char *)(iVar5 + 0x43) != '\0') &&
         (((&DAT_020b4084)
           [*(byte *)(*(int *)(*(int *)(param_1 + 0x330) + 0x38) +
                      (uint)*(byte *)(iVar5 + 0x38) * 0x40 + 0x31)] & 0x40) == 0)) {
        FUN_02071b28();
        *(char *)(param_1 + (uint)*(byte *)(param_1 + 0x365) + 0x366) = (char)iVar3;
        *(char *)(param_1 + 0x365) = *(char *)(param_1 + 0x365) + '\x01';
        *(undefined1 *)(param_1 + 0x364) = 1;
        for (iVar8 = 0; iVar8 < (int)(uint)*(byte *)(iVar5 + 0x44); iVar8 = iVar8 + 1) {
          piVar2 = *(int **)(*(int *)(iVar7 + iVar8 * 4 + 0xec) + 4);
          (**(code **)(*piVar2 + 0xd8))(piVar2,0);
        }
      }
    }
  }
  for (iVar3 = 0; iVar3 < (int)(*(byte *)(param_1 + 0x365) - 1); iVar3 = iVar3 + 1) {
    iVar7 = param_1 + iVar3;
    iVar5 = iVar3 + 1;
    uVar4 = *(undefined4 *)((uint)*(byte *)(iVar7 + 0x366) * 0x28 + param_1 + 0xd8);
    while (iVar5 < (int)(uint)*(byte *)(param_1 + 0x365)) {
      iVar8 = param_1 + iVar5;
      uVar6 = *(undefined4 *)((uint)*(byte *)(iVar8 + 0x366) * 0x28 + param_1 + 0xd8);
      FUN_0214f9a4(&local_30,uVar6);
      FUN_0214f9a4(&local_2c,uVar4);
      iVar5 = iVar5 + 1;
      if (local_2c < local_30) {
        uVar1 = *(undefined1 *)(iVar7 + 0x366);
        *(undefined1 *)(iVar7 + 0x366) = *(undefined1 *)(iVar8 + 0x366);
        *(undefined1 *)(iVar8 + 0x366) = uVar1;
        uVar4 = uVar6;
      }
    }
  }
  if (*(char *)(param_1 + 0x364) != '\0') {
    piVar2 = *(int **)(*(int *)(param_1 + 0x50) + 4);
    (**(code **)(*piVar2 + 0x148))(piVar2,8);
    piVar2 = *(int **)(*(int *)(param_1 + 0x54) + 4);
    (**(code **)(*piVar2 + 0x148))(piVar2,8);
  }
  return;
}

