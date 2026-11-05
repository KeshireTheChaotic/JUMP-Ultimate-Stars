
void FUN_0217f904(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  short sVar5;
  
  iVar2 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  puVar4 = (undefined4 *)0x0;
  puVar3 = *(undefined4 **)(*(int *)(*(int *)(iVar2 + 4) + 0x10) + 4);
  sVar5 = 0;
  while (puVar3 != (undefined4 *)0x0) {
    sVar1 = *(short *)((int)puVar3 + (*(uint *)(param_1 + 0xd4) >> 0x1c) * 2 + 0xc);
    if (sVar5 < sVar1) {
      puVar4 = puVar3;
    }
    puVar3 = (undefined4 *)*puVar3;
    if (sVar5 < sVar1) {
      sVar5 = sVar1;
    }
  }
  if (puVar4 == (undefined4 *)0x0) {
    FUN_0217f890(param_1);
    *(undefined1 *)(param_1 + 0x105) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x88) = puVar4[2];
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined1 *)(param_1 + 0x95) = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    DAT_02181a48 = DAT_02181a48 + 1;
  }
  return;
}

