
int FUN_021a1a18(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  while ((iVar4 < 0x40 &&
         (iVar2 = (uint)*(byte *)(param_1 + 8) + iVar4, iVar1 = iVar2 >> 0x1f,
         -1 < *(short *)(param_1 + (((uint)(iVar2 * 0x4000000 + iVar1) >> 0x1a | iVar1 << 6) - iVar1
                                   ) * 8 + 0xc)))) {
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 1;
  }
  return iVar3;
}

