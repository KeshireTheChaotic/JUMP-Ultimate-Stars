
undefined4 FUN_021c1050(int param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar1 = FUN_0205889c();
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  uVar3 = (uint)*(ushort *)(param_1 + 4);
  do {
    if (((uVar1 & 1 << (uVar3 - 1 & 0xff)) != 0) && (*(ushort *)(param_1 + 4) != uVar3)) {
      *(short *)(param_1 + 4) = (short)uVar3;
      return 1;
    }
    uVar2 = uVar2 + 1;
    if (uVar3 == 0x10) {
      uVar3 = 1;
    }
    else {
      uVar3 = uVar3 + 1;
    }
    uVar3 = uVar3 & 0xffff;
  } while (uVar2 < 0x10);
  return 1;
}

