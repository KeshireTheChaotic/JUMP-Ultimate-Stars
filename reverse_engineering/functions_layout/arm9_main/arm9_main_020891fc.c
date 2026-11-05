
undefined4 FUN_020891fc(void)

{
  int iVar1;
  
                    /* JUS-TAG strings=["CommLib.cpp","WH_StateInEndParentMP"] */
  DAT_0214bea4 = 4;
  iVar1 = FUN_0205965c(0x2089181);
  if (iVar1 == 3) {
    DAT_0214bea4 = 2;
    if (DAT_0214be8c != (code *)0x0) {
      (*DAT_0214be8c)(s__s___ILLEGAL_STATE__>_COMM_LIB_S_020a0458,s_WH_StateInEndParentMP_020a02e4);
    }
  }
  else if (iVar1 != 2) {
    FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0x3b8);
    return 0;
  }
  return 1;
}

