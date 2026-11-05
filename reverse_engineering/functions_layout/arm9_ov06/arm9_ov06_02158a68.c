
int FUN_02158a68(int param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = *(short *)(param_1 + 0x88);
  iVar3 = (int)*(short *)(param_1 + 0xb8);
  if (sVar2 == 8) {
    sVar1 = FUN_0200d12c(*(short *)(param_1 + 0xb8) * 0x19,100);
    iVar3 = (iVar3 + sVar1) * 0x10000 >> 0x10;
  }
  if (sVar2 == 0x24) {
    sVar2 = FUN_0200d12c((short)iVar3 * 0x19,100);
    iVar3 = (iVar3 + sVar2) * 0x10000 >> 0x10;
  }
  if (*(short *)(param_1 + 0xa0) == 0x16) {
    sVar2 = FUN_0200d12c((short)iVar3 * 0x46,100);
    iVar3 = (iVar3 - sVar2) * 0x10000 >> 0x10;
  }
  return iVar3;
}

