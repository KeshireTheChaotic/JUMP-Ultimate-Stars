
void FUN_02017a30(int param_1,uint param_2,int param_3,byte param_4)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (param_3 * (uint)*(ushort *)(param_1 + 8) >> 1) + (param_2 >> 1);
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + iVar2);
  if ((param_2 & 1) == 1) {
    param_4 = param_4 | bVar1 & 0xf0;
  }
  else {
    param_4 = bVar1 & 0xf | param_4 << 4;
  }
  *(byte *)(*(int *)(param_1 + 0xc) + iVar2) = param_4;
  return;
}

