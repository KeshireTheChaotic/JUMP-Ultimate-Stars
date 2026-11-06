
void FUN_020890a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02088904(*(short *)(param_1 + 2),s_CommLib_cpp_020a0338,0x33d);
    FUN_02089264(1);
    return;
  }
  DAT_0214bea4 = 4;
  iVar1 = FUN_02058d5c(0x2089081,0,param_3,param_4,param_4);
  if (iVar1 != 2) {
    FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0x32a);
    FUN_02089044();
    DAT_0214bea4 = 9;
  }
  return;
}

