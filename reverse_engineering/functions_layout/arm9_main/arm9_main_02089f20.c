
undefined4 FUN_02089f20(void)

{
  int iVar1;
  uint uVar2;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  uVar2 = 0;
  while (iVar1 = FUN_0205a408(&DAT_0214c200,&DAT_0214ca20,&DAT_0214c000), iVar1 == 5) {
    if (DAT_0214be8c != (code *)0x0) {
      (*DAT_0214be8c)(s_WH_StepDataSharing___Warning_No_D_020a0504);
    }
    FUN_020552a8();
    uVar2 = uVar2 + 1;
    if (0xb4 < uVar2) {
      FUN_02088904(9,s_CommLib_cpp_020a0338,0x9c0);
      return 0;
    }
  }
  if (iVar1 == 7) {
    return 1;
  }
  if (iVar1 != 0) {
    FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0x9d7);
    return 0;
  }
  for (uVar2 = 0; uVar2 < 8; uVar2 = uVar2 + 1) {
    iVar1 = 0;
    if ((DAT_0214be44 != 0) || (((uint)DAT_0214be4a & 1 << (uVar2 & 0xff)) != 0)) {
      iVar1 = FUN_02059d64(&DAT_0214c200,&DAT_0214c000,uVar2 & 0xffff);
    }
    if (iVar1 == 0) {
      (&DAT_0214ca28)[uVar2] = 0;
    }
    else {
      FUN_02051890(iVar1,&DAT_0214ca60 + uVar2 * 4,8);
      (&DAT_0214ca28)[uVar2] = 1;
    }
  }
  return 1;
}

