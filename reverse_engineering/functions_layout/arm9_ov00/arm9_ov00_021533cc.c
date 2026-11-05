
undefined4 FUN_021533cc(int *param_1,int param_2,uint param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uStack_20;
  
  if (param_3 < 3) {
    return 0;
  }
  param_1[0x33] = param_3 + 1;
  *param_1 = param_2;
  param_1[0x42] = *(int *)(*param_1 + 8);
  *(undefined1 *)(param_1 + 0x4b) = param_4;
  iVar1 = (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,param_1 + 1,0x30);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1[1] != 0x53445856) {
    return 0;
  }
  param_1[0x2b] = param_1[3];
  param_1[0x2c] = param_1[4];
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if (0x100 < (uint)param_1[3]) {
    return 0;
  }
  iVar1 = FUN_021537fc(param_1[3],param_1[4],param_1[6],param_1[0x33]);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = 0;
  do {
    iVar2 = thunk_FUN_02151bcc(param_1[9] + 0x400);
    param_1[iVar1 + 0x34] = iVar2;
    if (param_1[iVar1 + 0x34] == 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (param_1[8] != 0) {
    iVar1 = thunk_FUN_02151bcc(param_1[8] * 0x14f4);
    param_1[0x2d] = iVar1;
    if (param_1[0x2d] == 0) {
      return 0;
    }
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x43] = param_1[0x33];
  param_1[0x44] = param_1[0x33] + 1;
  param_1[0x45] = param_1[0x44];
  param_1[0x46] = 0;
  param_1[0x47] = param_1[0x33] + -1;
  param_1[0x48] = param_1[0x33] + -2;
  param_1[0x49] = 1;
  param_1[0x4a] = param_1[0x49];
  param_1[0x3e] = 0;
  piVar3 = (int *)*param_1;
  iVar2 = piVar3[2];
  (**(code **)(*piVar3 + 8))(piVar3,param_1[0xb] + param_1[0x42]);
  iVar1 = thunk_FUN_02151bcc(param_1[0xc] << 3);
  param_1[0x3d] = iVar1;
  iVar1 = (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,param_1[0x3d],param_1[0xc] << 3);
  if (iVar1 == 0) {
    return 0;
  }
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,iVar2);
  piVar3 = (int *)*param_1;
  iVar1 = piVar3[2];
  (**(code **)(*piVar3 + 8))(piVar3,param_1[10] + param_1[0x42]);
  uVar5 = 0;
  if (param_1[8] != 0) {
    iVar2 = 0;
    do {
      iVar4 = (**(code **)(*(int *)*param_1 + 0xc))
                        ((int *)*param_1,param_1[0x2d] + iVar2 + 0x8c0,0xc34);
      if (iVar4 == 0) {
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0x14f4;
    } while (uVar5 < (uint)param_1[8]);
  }
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1,iVar1);
  param_1[0x3c] = 1;
  (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,&uStack_20,4);
  param_1[0x36] = uStack_20 & 0xffff;
  param_1[0x3a] = uStack_20 >> 0x10;
  param_1[0x38] = 0;
  (**(code **)(*(int *)*param_1 + 0xc))((int *)*param_1,param_1[0x34],param_1[0x36] + 2);
  return 1;
}

