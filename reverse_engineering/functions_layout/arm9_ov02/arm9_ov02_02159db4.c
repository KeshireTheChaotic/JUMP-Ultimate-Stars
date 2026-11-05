
void FUN_02159db4(ushort *param_1,ushort *param_2,short *param_3,undefined4 param_4)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  int extraout_r1;
  int extraout_r1_00;
  int iVar4;
  short sVar5;
  undefined4 local_20;
  
  iVar1 = (int)(((uint)*param_2 - (uint)*param_1) * 0x10000) >> 0x10;
  local_20 = param_4;
  if (iVar1 < 1) {
LAB_02159df8:
    if (iVar1 < 1) {
      iVar4 = (int)*param_3;
      FUN_0200d12c(iVar1,iVar4);
      if (-(iVar4 >> 1) != extraout_r1_00 && iVar4 >> 1 <= -extraout_r1_00) goto LAB_02159e1c;
    }
    sVar2 = FUN_0200d12c(iVar1,(int)*param_3);
  }
  else {
    iVar4 = (int)*param_3;
    FUN_0200d12c(iVar1,iVar4);
    if (extraout_r1 <= iVar4 >> 1) goto LAB_02159df8;
LAB_02159e1c:
    if (iVar1 < 1) {
      sVar5 = -1;
    }
    else {
      sVar5 = 1;
    }
    sVar2 = FUN_0200d12c(iVar1,iVar4);
    sVar2 = sVar2 + sVar5;
  }
  *param_1 = *param_1 + sVar2;
  uVar3 = FUN_0200c99c(*param_1);
  uVar3 = FUN_0200c5ac(uVar3,0x42c80000);
  FUN_0200c9e4(0x45800000,uVar3);
  local_20 = FUN_0200c8e0();
  FUN_02151858(param_4,&local_20);
  *param_3 = *param_3 + -1;
  return;
}

