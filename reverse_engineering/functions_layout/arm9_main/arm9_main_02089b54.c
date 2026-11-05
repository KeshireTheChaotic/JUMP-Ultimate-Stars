
undefined2 FUN_02089b54(void)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  int extraout_r1;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  DAT_0214be52 = 0;
  DAT_0214be46 = 0x65;
  DAT_0214bea4 = 4;
  iVar1 = FUN_02089d44(1);
  if (iVar1 == 0x18) {
    FUN_02088904(0x18,s_CommLib_cpp_020a0338,0x7d8);
    return 0;
  }
  if (iVar1 != 2) {
    FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0x7de);
    return 0;
  }
  while (DAT_0214bea4 != 7) {
    if (DAT_0214bea4 != 4) {
      return 0;
    }
    (*DAT_020a0e18)();
  }
  DAT_0214bea4 = 2;
  uVar6 = (uint)DAT_0214be48;
  iVar1 = 0;
  uVar3 = 0;
  uVar7 = 0;
  do {
    if ((uVar6 & 1 << (uVar7 & 0xff)) != 0) {
      uVar3 = uVar3 + 1;
      iVar1 = (int)((uVar7 + 1) * 0x10000) >> 0x10;
    }
    uVar5 = (undefined2)iVar1;
    uVar7 = (int)((uVar7 + 1) * 0x10000) >> 0x10;
  } while ((int)uVar7 < 0x10);
  if (1 < uVar3) {
    uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar2,uVar3);
    iVar4 = extraout_r1;
    for (iVar1 = 0; iVar1 < 0x10; iVar1 = (iVar1 + 1) * 0x10000 >> 0x10) {
      if ((uVar6 & 1) != 0) {
        if (iVar4 == 0) {
          DAT_0214be52 = (undefined2)((uint)((iVar1 + 1) * 0x10000) >> 0x10);
          return DAT_0214be52;
        }
        iVar4 = iVar4 + -1;
      }
      uVar6 = uVar6 >> 1;
    }
    uVar5 = 0;
  }
  DAT_0214be52 = uVar5;
  return uVar5;
}

