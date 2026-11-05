
void FUN_020860f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x30);
  sVar2 = *(short *)(iVar5 + 0x14);
  *(short *)(iVar5 + 0x14) = sVar2 + -1;
  if (sVar2 != 0) {
    return;
  }
  bVar1 = *(byte *)(iVar5 + 0x16);
  *(byte *)(iVar5 + 0x16) = bVar1 + 1;
  uVar4 = *(undefined4 *)(*(int *)(iVar5 + 4) + (uint)bVar1 * 0x10 + 4);
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(*(int *)(iVar5 + 4) + (uint)bVar1 * 0x10);
  *(undefined4 *)(iVar3 + 0x10) = uVar4;
  if (*(char *)(iVar5 + 0x16) == *(char *)(iVar5 + 0x17)) {
    *(undefined1 *)(iVar5 + 0x16) = 0;
  }
  iVar3 = *(int *)(iVar5 + 4) + (uint)*(byte *)(iVar5 + 0x16) * 0x10;
  FUN_02085a04(param_1,(int)*(short *)(iVar3 + 8),(int)*(short *)(iVar3 + 10),uVar4,param_4);
  *(undefined2 *)(iVar5 + 0x14) = *(undefined2 *)(iVar3 + 0xc);
  return;
}

