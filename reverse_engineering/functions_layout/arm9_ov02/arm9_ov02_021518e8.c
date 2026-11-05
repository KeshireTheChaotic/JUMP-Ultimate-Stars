
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021518e8(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 8))();
  }
  if (param_1[0xd0] != 0) {
    func_0x021bab64();
  }
  if (param_1[0xce] != 0) {
    FUN_02156ac8();
    param_1[0xce] = 0;
  }
  if (param_1[0xcf] != 0) {
    FUN_02156048();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 8))();
  }
  _DAT_021d5154 = 0;
  iVar3 = 0x10;
  do {
    func_0x021b526c(iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x12);
  if (param_1[0xcd] != 0) {
    FUN_0206ae98();
  }
  iVar3 = 0;
  do {
    if ((int *)param_1[iVar3 + 10] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar3 + 10] + 8))();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 8))();
  }
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 8))();
  }
  iVar5 = (uint)*(byte *)((int)param_1 + 0x35d) * 0x3c + *(int *)(param_1[0xcc] + 0x30);
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(iVar5 + 0x2c); iVar3 = iVar3 + 1) {
    bVar1 = *(byte *)(iVar5 + iVar3 + 0x2d);
    iVar2 = *(int *)(param_1[0xcc] + 0x34);
    for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)((uint)bVar1 * 0x48 + iVar2 + 0x44);
        iVar4 = iVar4 + 1) {
      if ((int *)param_1[iVar3 * 10 + iVar4 + 0x3b] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar3 * 10 + iVar4 + 0x3b] + 8))();
        param_1[iVar3 * 10 + iVar4 + 0x3b] = 0;
      }
    }
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 8))();
  }
  iVar3 = 0;
  do {
    if ((int *)param_1[iVar3 + 0x16] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar3 + 0x16] + 0xc))();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  *(char *)(param_1[0xcc] + 0x52) = (char)param_1[0xd7];
  FUN_0201b244(param_1);
  return;
}

