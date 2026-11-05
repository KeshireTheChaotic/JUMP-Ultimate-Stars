
void FUN_0207003c(int param_1)

{
  int iVar1;
  char unaff_r5;
  
  DAT_020afcc5 = 0;
  FUN_0206e524(0,0x25,0x23,4,0);
  iVar1 = FUN_02087724();
  if (iVar1 == 0) {
    FUN_0206e524(1,4,6,0x25,(int)(char)(&DAT_02092440)[param_1 * 4]);
    FUN_0206e524(0,6,7,4,(int)(char)(&DAT_02092441)[param_1 * 4]);
    FUN_0206e524(0,7,0xf,6,(int)(char)(&DAT_02092442)[param_1 * 4]);
    unaff_r5 = '\x04';
  }
  else if (iVar1 == 1) {
    FUN_0206e524(1,4,0xf,0x25,(int)(char)(&DAT_02092440)[param_1 * 4]);
    unaff_r5 = '\x04';
  }
  else if (iVar1 == 2) {
    FUN_0206e524(1,0x24,0xf,0x23,0);
    unaff_r5 = '$';
  }
  FUN_0206e524(0,0xf,0xc,0xffffffff,2);
  FUN_0206e524(0,0xc,0xd,0xffffffff,6);
  FUN_0206e524(0,0xd,(int)unaff_r5,0xffffffff,(int)(char)(&DAT_02092443)[param_1 * 4]);
  return;
}

