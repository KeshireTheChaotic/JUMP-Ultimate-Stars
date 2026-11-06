
void FUN_021c0a4c(ushort *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if (uVar2 < 0x1a) {
    if (0x18 < uVar2) {
      if (param_1[1] == 0) {
        uVar1 = FUN_02059260(0x21c0a4d,DAT_021d4384);
        FUN_021bfba4(8,uVar1);
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    }
    if (uVar2 < 0x10) {
      (*(code *)((int)&switchD_021c0a6e::switchdataD_021c0a70 +
                (int)(short)(&switchD_021c0a6e::switchdataD_021c0a70)[uVar2]))();
      return;
    }
  }
  else if (uVar2 < 0x1e) {
    if (uVar2 == 0x1d) {
      if (param_1[1] == 0) {
        uVar1 = FUN_02059320(0x21c0a4d,DAT_021d5258);
        FUN_021bfba4(7,uVar1);
        return;
      }
      (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
      return;
    }
  }
  else if (uVar2 == 0x80) {
    if (param_1[2] - 0x10 < 8) {
      (*(code *)((int)&switchD_021c0f00::switchdataD_021c0f02 +
                (int)(short)(&switchD_021c0f00::switchdataD_021c0f02)[param_1[2] - 0x10]))();
      return;
    }
    return;
  }
  (**(code **)(DAT_021d5258 + 0x51c))(0x100,param_1);
  return;
}

