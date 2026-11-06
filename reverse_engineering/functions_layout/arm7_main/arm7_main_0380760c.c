
void FUN_0380760c(void)

{
  int iVar1;
  
  OS_InitTick();
  FUN_037fdc68();
  FUN_037fdc48(&DAT_0380ba9c);
  if (DAT_0380ba80 == 0) {
    DAT_0380ba80 = 1;
    FUN_03806fcc();
    iVar1 = FUN_037fbddc();
    if (iVar1 != -3) {
      DAT_0380ba6c = (undefined2)iVar1;
      thunk_FUN_037feb24();
      FUN_037feab8(0xd,FUN_038074ec);
      FUN_03807524();
      FUN_037feab8(0xd,FUN_038074c0);
      FUN_037feab8(0x10,&LAB_038074b0);
      FUN_037feab8(0x11,FUN_03807018);
    }
  }
  return;
}

