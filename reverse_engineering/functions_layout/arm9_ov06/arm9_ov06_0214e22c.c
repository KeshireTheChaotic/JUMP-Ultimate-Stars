
void FUN_0214e22c(undefined2 param_1,uint param_2)

{
  int iVar1;
  
  *(undefined2 *)(DAT_02172960 + 0x168) = param_1;
  *(byte *)(DAT_02172960 + 0x16b) = (byte)(1 << (param_2 & 0xff)) | *(byte *)(DAT_02172960 + 0x16b);
  *(undefined1 *)(DAT_02172960 + 0x16c) = 1;
  *(undefined1 *)(DAT_02172960 + 0x16d) = 1;
  iVar1 = FUN_0203b3e4();
  FUN_0214e374(*(undefined4 *)(iVar1 + 0x88),6);
  return;
}

