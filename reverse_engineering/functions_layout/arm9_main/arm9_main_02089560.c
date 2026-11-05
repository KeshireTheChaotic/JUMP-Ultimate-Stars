
void FUN_02089560(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
                    /* JUS-TAG strings=["%04x,","CommLib.cpp","GameInfo::"] */
  DAT_0214bf04 = (undefined2)param_2;
  DAT_0214bf00 = param_1;
  if (DAT_0214be8c != (code *)0x0) {
    (*DAT_0214be8c)(s_GameInfo___020a04bc);
  }
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    if (DAT_0214be8c != (code *)0x0) {
      (*DAT_0214be8c)(s__04x__020a04c8,*(undefined2 *)(param_1 + iVar1 * 2));
    }
  }
  if (DAT_0214be8c != (code *)0x0) {
    (*DAT_0214be8c)(&DAT_020a04d0);
  }
  iVar1 = FUN_0205ac6c(0x2088981,param_1,param_2,DAT_0214bf08,DAT_0214bf0c,1,param_4);
  if (iVar1 != 2) {
    FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0x4c2);
  }
  return;
}

