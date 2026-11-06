
void FUN_021c0424(ushort *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = DAT_021d5258;
  uVar3 = (uint)*param_1;
  if (uVar3 < 0x1e) {
    if (0x1c < uVar3) {
      if (param_1[1] != 0) {
        (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
        return;
      }
      DAT_021d5260 = DAT_021d5258 + 0x440;
      if (DAT_021d5264 == 0) {
        DAT_021d5264 = 1;
      }
      if (DAT_021d5266 == 0) {
        DAT_021d5266 = 200;
      }
      DAT_021d5268 = 0xff;
      DAT_021d5269 = 0xff;
      DAT_021d526a = 0xff;
      DAT_021d526b = 0xff;
      DAT_021d526c = 0xff;
      DAT_021d526d = 0xff;
      *(undefined4 *)(DAT_021d5258 + 0x5e4) = 1;
      *(undefined4 *)(iVar1 + 0x5e8) = 1;
      uVar2 = FUN_02059108(0x21c0425);
      FUN_021bfba4(10,uVar2);
      return;
    }
    if (uVar3 < 0x16) {
      (*(code *)((int)&switchD_021c044a::switchdataD_021c044c +
                (int)(short)(&switchD_021c044a::switchdataD_021c044c)[uVar3]))();
      return;
    }
  }
  else if (uVar3 == 0x80) {
    if (param_1[2] == 0x16) {
      FUN_02055684();
      return;
    }
    return;
  }
  (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
  return;
}

