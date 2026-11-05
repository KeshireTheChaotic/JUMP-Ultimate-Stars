
void FUN_020677e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [196];
  
  iVar1 = param_2 + 0x444;
  iVar5 = param_1 + -1;
  if (-1 < iVar5) {
    iVar3 = iVar1 + iVar5 * 4;
    iVar4 = param_2 + 0x470 + iVar5 * 0xc0;
    do {
      if (*(byte *)(iVar1 + param_1 * 4 + 2) < *(byte *)(iVar3 + 2)) break;
      MIi_CpuCopy32(iVar3,auStack_dc,4);
      iVar2 = iVar1 + param_1 * 4;
      MIi_CpuCopy32(iVar2,iVar3,4);
      MIi_CpuCopy32(auStack_dc,iVar2,4);
      MIi_CpuCopy32(iVar4,auStack_d8,0xc0);
      iVar2 = param_2 + 0x470 + param_1 * 0xc0;
      MIi_CpuCopy32(iVar2,iVar4,0xc0);
      MIi_CpuCopy32(auStack_d8,iVar2,0xc0);
      iVar3 = iVar3 + -4;
      iVar4 = iVar4 + -0xc0;
      iVar2 = iVar5 + -1;
      param_1 = iVar5;
      iVar5 = iVar2;
    } while (-1 < iVar2);
  }
  MIi_CpuClear32(0,iVar1 + 0x28,4,param_4,iVar1 + 0x28);
  MIi_CpuClear32(0,param_2 + 0xbf0,0xc0);
  return;
}

