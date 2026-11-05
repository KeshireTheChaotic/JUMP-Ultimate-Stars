
undefined4 FUN_02089104(void)

{
  int iVar1;
  
                    /* JUS-TAG strings=["CommLib.cpp","WH_StateInEndChildMP"] */
  DAT_0214bea4 = 4;
  iVar1 = FUN_0205965c(0x20890a9);
  if (iVar1 == 3) {
    DAT_0214bea4 = 2;
    if (DAT_0214be8c != (code *)0x0) {
      (*DAT_0214be8c)(s__s___ILLEGAL_STATE__>_COMM_LIB_S_020a0458,s_WH_StateInEndChildMP_020a02b4);
    }
  }
  else if (iVar1 != 2) {
    FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0x35a);
    return 0;
  }
  return 1;
}

