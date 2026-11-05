
undefined4 FUN_02178460(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    return 1;
  }
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x15) != '\x03') {
    iVar1 = FUN_02178448();
    *(char *)(iVar1 + 0x175) = *(char *)(iVar1 + 0x175) + '\x01';
  }
  iVar1 = FUN_02178448();
  if ((*(char *)(iVar1 + 0x15) == '\x03') || (iVar1 = FUN_02178448(), 4 < *(byte *)(iVar1 + 0x175)))
  {
    FUN_0217d118(6,0xfffeae6c);
    return 0;
  }
  return 1;
}

