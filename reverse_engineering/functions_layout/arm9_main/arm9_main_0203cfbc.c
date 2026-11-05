
void FUN_0203cfbc(int *param_1,undefined2 param_2,undefined2 param_3)

{
  short sVar1;
  
  *(undefined2 *)(param_1 + 0x232) = param_2;
  *(undefined2 *)((int)param_1 + 0x8ca) = param_3;
  if (param_1[0x239] == 1) {
    param_1[0x233] = 5;
    param_1[0x234] = 5;
  }
  else {
    sVar1 = (short)param_1[0x232];
    if (sVar1 == 0x20) {
      param_1[0x233] = 5;
    }
    else if (sVar1 == 0x40) {
      param_1[0x233] = 6;
    }
    else if (sVar1 == 0x80) {
      param_1[0x233] = 7;
    }
    else if (sVar1 == 0) {
      param_1[0x233] = 0;
    }
    sVar1 = *(short *)((int)param_1 + 0x8ca);
    if (sVar1 == 0x20) {
      param_1[0x234] = 5;
    }
    else if (sVar1 == 0x40) {
      param_1[0x234] = 6;
    }
    else if (sVar1 == 0x80) {
      param_1[0x234] = 7;
    }
    else if (sVar1 == 0) {
      param_1[0x234] = 0;
    }
  }
  param_1[0x235] = 1 << (param_1[0x233] & 0xffU);
  param_1[0x236] = 1 << (param_1[0x234] & 0xffU);
  param_1[0x238] = 0;
  FUN_0203d1b0(param_1);
  (**(code **)(*param_1 + 0x88))();
  FUN_0203d288(param_1);
  return;
}

