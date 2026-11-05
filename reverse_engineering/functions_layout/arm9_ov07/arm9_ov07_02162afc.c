
undefined4 FUN_02162afc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_02086c4c();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xae) = 0;
    return 1;
  }
  if ((param_2 == 0) || (iVar1 = FUN_020882c4(0), iVar1 == 0)) {
    return 0;
  }
  FUN_02088290();
  FUN_02086c94();
  *(undefined1 *)(param_1 + 0xae) = 0;
  return 1;
}

