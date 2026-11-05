
void FUN_020734e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_0214bc1c == param_1) {
    return;
  }
  DAT_0214bc20 = 0xffffffff;
  DAT_0214bc1c = param_1;
  FUN_0205b910(&DAT_0214bcb4,0,&DAT_0214b810,0xffffffff,param_4);
  FUN_0205b9e0(&DAT_0214bcb4,0);
  if (DAT_0214bc10 != -1) {
    FUN_0205cb14(DAT_0214bc18);
    FUN_0205cae8(DAT_0214bc18);
  }
  FUN_0205d8cc(param_1,DAT_0214bc18);
  DAT_0214bc14 = FUN_0205cbf8(DAT_0214bc18);
  FUN_0205cae8(DAT_0214bc18);
  uVar1 = BgmData::BgmData_Create();
  uVar2 = FUN_02075870();
  if ((0x11 < param_1) && (param_1 < 0x2f)) {
    param_1 = param_1 + 0x2a;
  }
  uVar4 = 0;
  do {
    if (uVar2 <= uVar4) {
LAB_020735c8:
      FUN_02075848(uVar1);
      return;
    }
    iVar3 = FUN_020758cc(uVar1,uVar4);
    if (param_1 == iVar3) {
      FUN_02071514(uVar4);
      goto LAB_020735c8;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

