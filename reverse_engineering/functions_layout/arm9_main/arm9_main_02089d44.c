
undefined4 FUN_02089d44(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  uVar1 = FUN_0205889c();
  if (uVar1 == 0x8000) {
    FUN_02088904(3,s_CommLib_cpp_020a0338,0x869);
    uVar2 = 3;
  }
  else if (uVar1 == 0) {
    FUN_02088904(0x16,s_CommLib_cpp_020a0338,0x870);
    uVar2 = 0x18;
  }
  else {
    do {
      if ((1 << (param_1 - 1 & 0xff) & uVar1) != 0) {
        uVar2 = FUN_0205ab10(0x2089cd1,3,0x11,param_1,0x1e,param_4);
        return uVar2;
      }
      param_1 = param_1 + 1 & 0xffff;
    } while (param_1 < 0x11);
    uVar2 = 0x18;
  }
  return uVar2;
}

