
void FUN_020801fc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x50); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar3 = puVar1[2];
    if ((*(byte *)(iVar3 + 0x10) & 0x20) == 0) {
      iVar4 = *(int *)(*(int *)(*(int *)(iVar3 + 8) + 0x1c) + 0xc);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0xc) + 0x1c) + 0xc) + 0x5c);
      *(uint *)(iVar4 + 0x40) = *(uint *)(iVar4 + 0x40) | 0x1000000;
      iVar3 = *(int *)(iVar4 + 0x5c);
      iVar5 = *(int *)(iVar2 + 0xc);
      iVar2 = *(int *)(*(int *)(iVar4 + 0x5c) + 0xc);
      iVar4 = (int)*(short *)(iVar3 + 0x24);
      if (iVar5 < iVar2) {
        bVar6 = iVar4 < 0;
        if (bVar6) {
          param_3 = iVar2 - iVar5;
        }
      }
      else {
        bVar6 = 0 < iVar4;
        if (0 < iVar4) {
          param_3 = iVar5 - iVar2;
        }
      }
      if (bVar6) {
        iVar2 = iVar4 * 0xc0 >> 8;
        if (param_3 < 0x800) {
          iVar2 = iVar2 * 0xc0 >> 8;
        }
        *(short *)(iVar3 + 0x30) =
             *(short *)(iVar3 + 0x30) + (short)((uint)(iVar2 * -0x10000) >> 0x10);
      }
    }
  }
  return;
}

