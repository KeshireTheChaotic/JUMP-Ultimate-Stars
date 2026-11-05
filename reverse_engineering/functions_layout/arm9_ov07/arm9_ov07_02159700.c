
bool FUN_02159700(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = DAT_0216ad78;
  uVar2 = FUN_0208bb00(param_1 * 0xdc + DAT_0216ad78 + 0x2c);
  *(undefined1 *)(iVar1 + 0xbe8) = uVar2;
  return *(char *)(iVar1 + 0xbe8) != '\0';
}

