
void FUN_020895f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  sVar1 = *(short *)(param_1 + 2);
  if (sVar1 == 0) {
    switch(*(undefined2 *)(param_1 + 4)) {
    case 10:
      iVar2 = FUN_0205a7fc(&DAT_0214c200,0xd,0xff,8,1);
      if (iVar2 == 0) {
        DAT_0214bea4 = 6;
      }
      else {
        FUN_02088904(iVar2,s_CommLib_cpp_020a0338,0x565);
        if (DAT_0214bea4 != 2) {
          if ((DAT_0214bea4 != 6) && (DAT_0214bea4 != 5)) {
            DAT_0214bea4 = 4;
            FUN_02089044();
            return;
          }
          DAT_0214bea4 = 4;
          switch(DAT_0214be60) {
          case 0:
          case 2:
            iVar2 = FUN_020891fc();
            if (iVar2 == 0) {
              FUN_02089044();
              return;
            }
            break;
          case 1:
          case 3:
            iVar2 = FUN_02089104();
            if (iVar2 == 0) {
              FUN_02089044();
              return;
            }
          }
        }
      }
    }
  }
  else if (((sVar1 != 0xf) && (sVar1 != 9)) && (sVar1 != 0xd)) {
    FUN_02088904(sVar1,s_CommLib_cpp_020a0338,0x54f,param_4,param_4);
    FUN_02089044();
    return;
  }
  return;
}

