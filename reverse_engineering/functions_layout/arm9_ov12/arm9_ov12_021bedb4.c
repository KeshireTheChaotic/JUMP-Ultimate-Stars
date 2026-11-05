
void FUN_021bedb4(int param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  iVar3 = *param_2;
  if (iVar3 == 0) {
    uVar2 = *(uint *)(param_1 + 0x28);
    if ((0x1ffffff < uVar2) && (uVar2 < 0x22c0000)) {
      if (uVar2 + *(int *)(param_1 + 0x2c) < 0x22c0001) {
        param_3[2] = *(int *)(param_1 + 0x2c);
        param_3[1] = *(int *)(param_1 + 0x28);
        *param_3 = param_3[1];
        param_3[3] = param_3[3] & 0xfffffffe;
        return;
      }
    }
    FUN_02055684();
    return;
  }
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      param_3[2] = 0x160;
      param_3[1] = 0x27ffe00;
      *param_3 = param_3[1];
      param_3[3] = param_3[3] & 0xfffffffe;
      return;
    }
    return;
  }
  bVar5 = false;
  bVar1 = false;
  uVar2 = *(uint *)(param_1 + 0x38);
  uVar4 = uVar2 + *(uint *)(param_1 + 0x3c);
  if ((uVar2 < 0x2000000) || (0x23fe7ff < uVar2)) {
    if ((uVar2 < 0x37f8000) || (0x380efff < uVar2)) {
      bVar5 = true;
    }
    else if (uVar4 < 0x380f001) {
      bVar1 = true;
    }
    else {
      bVar5 = true;
    }
  }
  else if (0x2300000 < uVar4) {
    if ((uVar4 < 0x23fe800) && (*(uint *)(param_1 + 0x3c) < 0x40001)) {
      bVar1 = true;
    }
    else {
      bVar5 = true;
    }
  }
  if (bVar5) {
    FUN_02055684();
  }
  param_3[2] = *(int *)(param_1 + 0x3c);
  param_3[1] = *(int *)(param_1 + 0x38);
  if (bVar1) {
    *param_3 = *param_4;
    *param_4 = *param_4 + param_3[2];
  }
  else {
    *param_3 = param_3[1];
  }
  param_3[3] = param_3[3] & 0xfffffffeU | 1;
  return;
}

