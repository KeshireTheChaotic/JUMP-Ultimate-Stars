
void FUN_0206f81c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_020704a8();
  iVar1 = FUN_020703b8(param_1);
  if (iVar1 == 0) {
    *(undefined1 *)(iRam0206f908 + 0x18) = 1;
    FUN_0206e524(1,4,0x17,0x15,4,param_4);
    FUN_0206e524(0,0x17,0xf,0xffffffff,param_1);
  }
  else {
    FUN_0206e524(1,0x17,0xf,0xffffffff,param_1,param_4);
  }
  FUN_0206e524(0,0xf,0xc,0xffffffff,1,param_4);
  FUN_0206e524(0,0xc,0x18,0xffffffff,1);
  FUN_0206e524(0,0x18,0x1a,0xffffffff,param_1);
  FUN_0206e524(0,0x1a,0x17,0x15,0x13);
  *(char *)(iRam0206f908 + 0x11) = (char)param_1;
  return;
}

