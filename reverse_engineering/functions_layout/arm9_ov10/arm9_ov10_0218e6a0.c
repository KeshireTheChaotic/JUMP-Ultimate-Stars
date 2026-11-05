
undefined4 FUN_0218e6a0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_10;
  
  puVar1 = (undefined1 *)FUN_0218e7d4(&DAT_021a887e,3,&local_10);
  if (param_1 == 0) {
    *puVar1 = 0x32;
    puVar1[1] = 4;
    puVar1[2] = (char)((uint)DAT_021a851c >> 0x18);
    puVar1[3] = (char)((uint)DAT_021a851c >> 0x10);
    puVar1[4] = (char)((uint)DAT_021a851c >> 8);
    puVar1[5] = (char)DAT_021a851c;
    puVar1[6] = 0x36;
    puVar1[7] = 4;
    puVar1[8] = (char)((uint)DAT_021a8508 >> 0x18);
    puVar1[9] = (char)((uint)DAT_021a8508 >> 0x10);
    puVar1[10] = (char)((uint)DAT_021a8508 >> 8);
    puVar1[0xb] = (char)DAT_021a8508;
    puVar1 = puVar1 + 0xc;
  }
  *puVar1 = 0xff;
  iVar2 = FUN_0218e7b4(0,300,puVar1 + 1,puVar1 + -0x21a887d);
  FUN_0218eca8(&DAT_021a887e,iVar2 + -0x21a887e);
  return local_10;
}

