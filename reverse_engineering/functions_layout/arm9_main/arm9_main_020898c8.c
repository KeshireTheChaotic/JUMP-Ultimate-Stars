
undefined4 FUN_020898c8(void)

{
  uint uVar1;
  int iVar2;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  uVar1 = FUN_0205889c();
  if (uVar1 == 0x8000) {
    FUN_02088904(3,s_CommLib_cpp_020a0338,0x689);
    return 0;
  }
  if (uVar1 == 0) {
    FUN_02088904(0x16,s_CommLib_cpp_020a0338,0x691);
    return 0;
  }
  if (DAT_0214be4c == 0) {
    do {
      DAT_0214bee4 = DAT_0214bee4 + 1;
      if (0x10 < DAT_0214bee4) {
        DAT_0214bee4 = 1;
      }
    } while ((uVar1 & 1 << (DAT_0214bee4 - 1 & 0xff)) == 0);
  }
  else {
    DAT_0214bee4 = DAT_0214be4c;
  }
  DAT_0214bee6 = FUN_020586ac();
  DAT_0214bee0 = &DAT_0214bf40;
  iVar2 = FUN_02059108(CommLib::ScanFunc + 1,&DAT_0214bee0);
  if (iVar2 == 2) {
    return 1;
  }
  FUN_02088904(iVar2,s_CommLib_cpp_020a0338,0x6b2);
  return 0;
}

