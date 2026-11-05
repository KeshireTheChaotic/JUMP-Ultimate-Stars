
void FUN_02088eac(int param_1,uint param_2)

{
  uint uVar1;
  
                    /* JUS-TAG strings=["CommLib.cpp"] source_file_inferred="CommLib.cpp" */
  uVar1 = 0;
  while( true ) {
    if (param_2 <= uVar1) {
      if (DAT_0214be8c != (code *)0x0) {
        (*DAT_0214be8c)(s_WaitStateChangeError__state____d_020a0434,DAT_0214bea4);
      }
      FUN_02088904(9,s_CommLib_cpp_020a0338,0x299);
      return;
    }
    if (DAT_0214bea4 != param_1) break;
    (*DAT_020a0e18)();
    uVar1 = uVar1 + 1;
  }
  return;
}

