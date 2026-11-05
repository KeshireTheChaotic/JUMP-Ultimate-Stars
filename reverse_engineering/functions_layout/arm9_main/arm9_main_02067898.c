
void FUN_02067898(int param_1,int param_2,byte param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_4 + 0x444 + param_1 * 4;
  uVar1 = *(ushort *)(param_2 + 2);
  if ((uVar1 & 2) == 0) {
    uVar2 = ((int)(uint)uVar1 >> 2) + 0x19U & 0xff;
  }
  else {
    uVar2 = (uVar1 & 0x3ff) >> 2;
  }
  if (*(byte *)(iVar3 + 2) < uVar2) {
    *(char *)(iVar3 + 2) = (char)uVar2;
    *(byte *)(iVar3 + 3) = *(byte *)(iVar3 + 3) & 0x80 | param_3 & 0x7f;
  }
  MIi_CpuCopy32(param_2,param_4 + 0x470 + param_1 * 0xc0,0xc0);
  return;
}

