
int FUN_02081a58(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if ((param_1 & 0x2600) != 0) {
    return 0x10;
  }
  if ((param_1 & 0xff) == 0) {
    return 0x11;
  }
  if ((param_1 & 0xf0) != 0) {
    iVar1 = 4;
  }
  iVar2 = iVar1;
  if ((param_2 & 0x100) != 0) {
    iVar2 = 0xc;
  }
  if ((param_2 & 0xc0) != 0) {
    iVar2 = 8;
  }
  return iVar2 + (&DAT_0209ff34)[param_1 >> iVar1 & 0xf];
}

