
void FUN_02178de0(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  FUN_02175628(*(undefined4 *)(param_1 + 0x10));
  FUN_02175628();
  iVar3 = FUN_02175628();
  iVar7 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
  iVar4 = FUN_0217718c();
  iVar3 = FUN_02176d50(iVar3);
  iVar5 = *(int *)(iVar7 + 0x20);
  if (*(char *)(iVar5 + 0x1ec) != '\0') {
    return;
  }
  uVar6 = *(uint *)(iVar7 + 0xd4);
  bVar8 = (uVar6 & 2) != 0;
  cVar1 = '\0';
  if (bVar8) {
    cVar1 = *(char *)(iVar5 + 0xdb);
  }
  if (bVar8 && cVar1 != '\0') {
    return;
  }
  uVar2 = *(ushort *)(param_1 + 0x188);
  iVar4 = *(int *)(param_1 + 300) - *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x5c) + 0xc);
  if (uVar2 == 0) {
    if ((uVar6 & 0x80) == 0) {
      if ((iVar4 < 0) && ((*(uint *)(iVar3 + 300) & 8) == 0)) {
        *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 8;
        *(short *)(param_1 + 0x188) = *(short *)(param_1 + 0x188) + 1;
      }
      if (-1 < iVar4) {
        *(undefined2 *)(param_1 + 0x188) = 0;
        *(undefined1 *)(param_1 + 0x18b) = 0;
      }
      return;
    }
    if ((0 < iVar4) && ((*(uint *)(iVar3 + 300) & 4) == 0)) {
      *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) | 4;
      *(short *)(param_1 + 0x188) = *(short *)(param_1 + 0x188) + 1;
    }
    if (iVar4 < 1) {
      *(undefined2 *)(param_1 + 0x188) = 0;
      *(undefined1 *)(param_1 + 0x18b) = 0;
    }
    return;
  }
  *(ushort *)(param_1 + 0x188) = uVar2 + 1;
  if (uVar2 < 2) {
    return;
  }
  *(uint *)(iVar3 + 0xe4) = *(uint *)(iVar3 + 0xe4) & 0xfffffff3;
  *(undefined2 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x18b) = 0;
  return;
}

