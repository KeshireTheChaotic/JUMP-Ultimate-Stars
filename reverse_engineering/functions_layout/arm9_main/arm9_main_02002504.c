
void FUN_02002504(uint *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_2;
  if (0x1f < param_3) {
    uVar2 = -(int)param_1 & 3;
    if (uVar2 != 0) {
      param_3 = param_3 - uVar2;
      do {
        *(byte *)param_1 = param_2;
        param_1 = (uint *)((int)param_1 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (uVar1 != 0) {
      uVar1 = uVar1 | uVar1 << 0x10 | uVar1 << 0x18 | uVar1 << 8;
    }
    for (uVar2 = param_3 >> 5; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = uVar1;
      param_1[1] = uVar1;
      param_1[2] = uVar1;
      param_1[3] = uVar1;
      param_1[4] = uVar1;
      param_1[5] = uVar1;
      param_1[6] = uVar1;
      param_1[7] = uVar1;
      param_1 = param_1 + 8;
    }
    for (uVar2 = (param_3 & 0x1f) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = uVar1;
      param_1 = param_1 + 1;
    }
    param_3 = param_3 & 3;
  }
  if (param_3 != 0) {
    do {
      *(byte *)param_1 = (byte)uVar1;
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

