
void FUN_0208a410(void)

{
  int iVar1;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  DAT_0214bea4 = 4;
  iVar1 = FUN_02057adc();
  if (iVar1 == 0) {
    iVar1 = FUN_02058cc0(&LAB_0208a3e8_1,DAT_0214be4a);
    if (iVar1 != 2) {
      if (iVar1 != 7) {
        FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0xae1);
      }
      FUN_02089044();
      return;
    }
  }
  else {
    iVar1 = FUN_02058d5c(&LAB_0208a3e8_1,0);
    if (iVar1 != 2) {
      FUN_02088904(iVar1,s_CommLib_cpp_020a0338,0xaf2);
      FUN_02089044();
      return;
    }
  }
  FUN_02088eac(4,600);
  return;
}

