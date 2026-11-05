
void FUN_0215f2d8(void)

{
  int iVar1;
  undefined1 local_10 [4];
  undefined1 local_c [4];
  
  local_10[0] = DAT_0216aba4;
  local_10[1] = DAT_0216aba5;
  local_10[2] = DAT_0216aba6;
  local_10[3] = DAT_0216aba7;
  local_c[0] = DAT_0216aba8;
  local_c[1] = DAT_0216aba9;
  local_c[2] = DAT_0216abaa;
  local_c[3] = DAT_0216abab;
  if (DAT_0216e7b0 < 4) {
    FUN_02161174(*DAT_0216e7b4,local_10[DAT_0216e7b0],local_10[DAT_0216e7b0]);
    if (DAT_0216e7b0 != 3) {
      iVar1 = FUN_02161fc0();
      if (2 < iVar1) {
        iVar1 = 3;
      }
      FUN_02165c80(DAT_0216e7b4[DAT_0216e7b0 + 1],0xffffffff,0,local_c[iVar1]);
    }
  }
  return;
}

