
void FUN_02190838(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_3 + 0x4c);
  *(undefined2 *)(iVar5 + 0x22) = 8;
  *(short *)(iVar5 + 0x26) = (short)DAT_020aab78;
  *(undefined2 *)(iVar5 + 0x24) = 0;
  sVar1 = DAT_021a84e8;
  *(short *)(param_3 + 10) = DAT_021a84e8;
  DAT_021a84e8 = DAT_021a84e8 + 1;
  *(short *)(iVar5 + 0x28) = sVar1;
  uVar3 = FUN_02191234(iVar5 + 0x22,8,0);
  uVar2 = FUN_02191234(param_1,param_2,uVar3);
  iVar4 = FUN_02191220(uVar2);
  *(ushort *)(iVar5 + 0x24) = (ushort)((uint)iVar4 >> 8) | (ushort)(iVar4 << 8);
  FUN_021908ac(iVar5 + 0x22,8,param_1,param_2,*(undefined4 *)(param_3 + 0x1c),1);
  return;
}

