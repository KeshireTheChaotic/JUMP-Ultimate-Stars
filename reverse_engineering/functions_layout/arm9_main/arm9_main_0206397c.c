
int FUN_0206397c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  byte abStack_18 [2];
  ushort uStack_16;
  undefined4 uStack_14;
  int iStack_10;
  
  puVar2 = *(undefined4 **)(param_1 + 0x30);
  uStack_14 = *(undefined4 *)(param_1 + 8);
  iStack_10 = *(int *)(param_1 + 0x28);
  iVar1 = FUN_02063af4(&uStack_14,abStack_18,1);
  if (iVar1 == 0) {
    puVar2[4] = abStack_18[0] & 0x7f;
    puVar2[3] = (int)(uint)abStack_18[0] >> 7;
    if (puVar2[4] == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x34) == 0) {
      iVar1 = FUN_02063af4(&uStack_14,puVar2 + 5);
      if (iVar1 != 0) {
        return iVar1;
      }
      *(undefined1 *)((int)puVar2 + puVar2[4] + 0x14) = 0;
      iVar1 = 0;
    }
    else {
      iStack_10 = iStack_10 + puVar2[4];
    }
    if (puVar2[3] == 0) {
      *puVar2 = *(undefined4 *)(param_1 + 8);
      puVar2[1] = (uint)*(ushort *)(param_1 + 0x26);
      *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
    }
    else {
      iVar1 = FUN_02063af4(&uStack_14,&uStack_16,2);
      if (iVar1 != 0) {
        return iVar1;
      }
      *puVar2 = *(undefined4 *)(param_1 + 8);
      *(ushort *)(puVar2 + 1) = uStack_16 & 0xfff;
      *(undefined2 *)((int)puVar2 + 6) = 0;
      puVar2[2] = 0;
      iVar1 = 0;
    }
    *(int *)(param_1 + 0x28) = iStack_10;
  }
  return iVar1;
}

