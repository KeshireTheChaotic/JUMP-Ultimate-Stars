
byte * FUN_02189c7c(byte *param_1)

{
  undefined4 uVar1;
  char extraout_r1;
  char extraout_r1_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (param_1 == (byte *)0x0) {
    FUN_02002068(s_buffer_021a6594,s_gt2Auth_c_021a659c,0,0x2b);
  }
  FUN_02001ed8();
  FUN_02003e24();
  uVar1 = FUN_02003dfc();
  FUN_0200d12c(uVar1,0x5d);
  *param_1 = extraout_r1 + 0x21;
  uVar3 = 0;
  uVar4 = 1;
  do {
    uVar2 = (uint)*param_1;
    uVar3 = uVar2 & 1 ^ uVar3 ^ (uVar4 ^ param_1[uVar4 - 1]) & 1 ^ (uint)(uVar2 < 0x4f) ^
            (uint)(param_1[uVar4 - 1] < uVar2);
    pbVar5 = param_1 + uVar4;
    uVar1 = FUN_02003dfc();
    FUN_0200d12c(uVar1,0x5d);
    param_1[uVar4] = extraout_r1_00 + 0x21;
    if (((uVar3 != 0) && ((*pbVar5 & 1) == 0)) || ((uVar3 == 0 && ((*pbVar5 & 1) == 1)))) {
      *pbVar5 = *pbVar5 + 1;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x20);
  return param_1;
}

