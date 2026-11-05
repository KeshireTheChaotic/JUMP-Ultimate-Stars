
void FUN_021c09f4(int param_1)

{
  ushort uVar1;
  
  if (*(short *)(param_1 + 2) == 0) {
    uVar1 = *(ushort *)(param_1 + 4);
    if (uVar1 < 0x16) {
      if (uVar1 < 0x15) {
        if (((uVar1 < 10) && (6 < uVar1)) && (uVar1 != 7)) {
          return;
        }
      }
      else {
        (**(code **)(DAT_021d5258 + 0x51c))(9);
      }
    }
    else if (((uVar1 < 0x1b) && (0x18 < uVar1)) && (uVar1 != 0x19)) {
      return;
    }
  }
  return;
}

