
undefined4 FUN_02068188(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  if (bVar1 < 0xb) {
    iVar2 = FUN_0206811c();
    if (iVar2 == 1) {
      *param_1 = 0;
      return 1;
    }
    if (iVar2 == -1) {
      *param_1 = 0x12;
      return 1;
    }
  }
  else if (bVar1 == 0xe) {
    func_0x02175200();
    func_0x02175254();
    *param_1 = 0xc;
  }
  else if ((bVar1 < 0x12) && (iVar2 = FUN_020680ec(), iVar2 == 1)) {
    *param_1 = 10;
  }
  return 0;
}

