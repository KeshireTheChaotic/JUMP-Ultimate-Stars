
void FUN_02158e64(int *param_1,short *param_2,short *param_3,short *param_4,int param_5,int param_6,
                 char param_7)

{
  uint uVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  short *psStack_1c;
  
  psStack_1c = param_4;
  FUN_021518d4(&local_28);
  local_28 = *param_2 * 0x1000 - *param_1;
  local_24 = *param_3 * 0x1000 - param_1[1];
  if ((param_7 != '\0') && (0 < *param_4)) {
    local_28 = local_28 * 2;
    local_24 = local_24 * 2;
  }
  iVar2 = local_28;
  uVar1 = local_28 >> 0xb;
  if (local_28 < 1) {
LAB_02158ef8:
    if (iVar2 < 1) {
      iVar3 = (int)*param_4;
      FUN_0200d12c((int)(iVar2 + (uVar1 >> 0x14)) >> 0xc,iVar3);
      if (-(iVar3 >> 1) != extraout_r1_00 && iVar3 >> 1 <= -extraout_r1_00) goto LAB_02158f24;
    }
    local_28 = FUN_0200d12c(iVar2,(int)*param_4);
  }
  else {
    iVar3 = (int)*param_4;
    FUN_0200d12c((int)(local_28 + (uVar1 >> 0x14)) >> 0xc,iVar3);
    if (extraout_r1 <= iVar3 >> 1) goto LAB_02158ef8;
LAB_02158f24:
    if (iVar2 < 1) {
      iVar4 = -1;
    }
    else {
      iVar4 = 1;
    }
    iVar2 = FUN_0200d12c(iVar2,iVar3);
    iVar2 = iVar2 + iVar4 * 0x1000;
    local_28 = (((int)(iVar2 + ((uint)(iVar2 >> 0xb) >> 0x14)) >> 0xc) << 0x10) >> 4;
  }
  iVar2 = local_24;
  uVar1 = local_24 >> 0xb;
  if (local_24 < 1) {
LAB_02158f98:
    if (iVar2 < 1) {
      iVar3 = (int)*param_4;
      FUN_0200d12c((int)(iVar2 + (uVar1 >> 0x14)) >> 0xc,iVar3);
      if (-(iVar3 >> 1) != extraout_r1_02 && iVar3 >> 1 <= -extraout_r1_02) goto LAB_02158fc4;
    }
    local_24 = FUN_0200d12c(iVar2,(int)*param_4);
  }
  else {
    iVar3 = (int)*param_4;
    FUN_0200d12c((int)(local_24 + (uVar1 >> 0x14)) >> 0xc,iVar3);
    if (extraout_r1_01 <= iVar3 >> 1) goto LAB_02158f98;
LAB_02158fc4:
    if (iVar2 < 1) {
      iVar4 = -1;
    }
    else {
      iVar4 = 1;
    }
    iVar2 = FUN_0200d12c(iVar2,iVar3);
    iVar2 = iVar2 + iVar4 * 0x1000;
    local_24 = (((int)(iVar2 + ((uint)(iVar2 >> 0xb) >> 0x14)) >> 0xc) << 0x10) >> 4;
  }
  *param_1 = *param_1 + local_28;
  param_1[1] = param_1[1] + local_24;
  if (param_5 == 0) {
    if (param_6 != 0) {
      FUN_0214f960(param_6,param_1);
    }
  }
  else {
    FUN_0214f960(param_5,param_1);
  }
  *param_4 = *param_4 + -1;
  return;
}

