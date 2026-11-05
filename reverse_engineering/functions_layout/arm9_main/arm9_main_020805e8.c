
void FUN_020805e8(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  for (puVar5 = *(undefined4 **)(param_1 + 0xd0); puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)*puVar5) {
    for (puVar4 = *(undefined4 **)(*(int *)(puVar5[2] + 0x60) + 0x10); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)*puVar4) {
      if ((*(byte *)(puVar4 + 4) & 4) != 0) {
        iVar3 = *(int *)(*(int *)(puVar4[3] + 0x1c) + 0xc);
        iVar2 = *(int *)(iVar3 + 0x5c);
        if ((*(uint *)(iVar2 + 0x34) & 0x10) == 0) {
          sVar1 = *(short *)(iVar2 + 0x2e);
          bVar6 = -1 < sVar1;
          if (bVar6) {
            sVar1 = *(short *)(iVar2 + 0x32);
          }
          if (bVar6 && -1 < sVar1) {
            *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) | 0x400;
          }
        }
      }
    }
  }
  return;
}

