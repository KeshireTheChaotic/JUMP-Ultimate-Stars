
void FUN_02159de8(undefined1 *param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uVar3;
  short sVar4;
  int extraout_r1;
  
  param_2 = param_2 + 1;
  iVar2 = FUN_0200d12c(param_2,10,param_3,param_4,param_4);
  if (iVar2 == 0) {
    sVar4 = -0xf60;
  }
  else {
    sVar4 = (short)iVar2 + (short)param_3;
  }
  uVar3 = (undefined1)((ushort)sVar4 >> 8);
  if (param_4 == 0) {
    *param_1 = uVar3;
    param_1[1] = (char)sVar4;
  }
  else {
    *param_1 = (char)sVar4;
    param_1[1] = uVar3;
  }
  FUN_0200d12c(param_2,10);
  uVar3 = (undefined1)(param_3 + extraout_r1);
  uVar1 = (undefined1)((uint)(param_3 + extraout_r1) >> 8);
  if (param_4 == 0) {
    param_1[2] = uVar1;
    param_1[3] = uVar3;
  }
  else {
    param_1[2] = uVar3;
    param_1[3] = uVar1;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 < 10) {
    if (param_4 == 0) {
      param_1[4] = 0xf0;
      uVar3 = 0xa1;
    }
    else {
      param_1[4] = 0xa1;
      uVar3 = 0xf0;
    }
    param_1[5] = uVar3;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

