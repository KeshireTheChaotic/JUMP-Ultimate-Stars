
void FUN_02178bd0(int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  FUN_02175628(*(undefined4 *)(param_1 + 0x10));
  FUN_02175628();
  uVar3 = FUN_02175628();
  iVar4 = FUN_0217718c();
  iVar5 = FUN_02176d50(uVar3);
  iVar10 = *(int *)(*(int *)(iVar4 + 0x10) + 0x5c);
  *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) & 0xfffffff3;
  iVar9 = *(int *)(iVar10 + 0xc) - *(int *)(param_1 + 0x148);
  if (iVar9 < 0) {
    iVar6 = -iVar9;
  }
  else {
    iVar6 = iVar9;
  }
  if (iVar6 < 0x180) {
    if (*(short *)(param_1 + 0x160) < 0) {
      FUN_02178f40(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x18b) = 1;
    return;
  }
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  bVar2 = false;
  if (0x8000 < iVar9) {
    uVar7 = FUN_02177c24(uVar3);
    iVar9 = FUN_02177c00(uVar7,0xc);
    if ((iVar9 == 0) && (iVar9 = FUN_02179358(uVar7), iVar9 != 0)) {
      FUN_02178240(uVar3);
      uVar8 = func_0x0215da74();
      bVar11 = uVar8 == 0;
      if (bVar11) {
        uVar8 = (uint)*(byte *)(param_1 + 399);
      }
      bVar2 = bVar11 && uVar8 == 0;
      if (bVar11 && uVar8 == 0) {
        *(bool *)(param_1 + 399) = bVar2;
      }
    }
  }
  iVar9 = *(int *)(iVar10 + 0xc);
  uVar8 = *(uint *)(*(int *)(iVar4 + 0x10) + 0x78);
  if (*(int *)(param_1 + 0x148) < iVar9) {
    if ((uVar8 & 4) != 0) {
      *(int *)(param_1 + 0x148) = iVar9 + 0x800;
    }
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 399);
      if ((cVar1 == '\x01' || cVar1 == '\x02') || ((byte)(cVar1 - 6U) < 2)) {
        *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | 8;
      }
      *(char *)(param_1 + 399) = *(char *)(param_1 + 399) + '\x01';
      FUN_02178240(uVar3);
      iVar9 = func_0x0215da74();
      if (iVar9 != 0) {
        *(undefined1 *)(param_1 + 399) = 0;
      }
      return;
    }
    FUN_02178b70(iVar5,8);
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | 8;
    return;
  }
  if ((uVar8 & 8) != 0) {
    *(int *)(param_1 + 0x148) = iVar9 + -0x800;
  }
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 399);
    if ((cVar1 == '\x01' || cVar1 == '\x02') || ((byte)(cVar1 - 6U) < 2)) {
      *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | 4;
    }
    *(char *)(param_1 + 399) = *(char *)(param_1 + 399) + '\x01';
    FUN_02178240(uVar3);
    iVar9 = func_0x0215da74();
    if (iVar9 != 0) {
      *(undefined1 *)(param_1 + 399) = 0;
    }
    return;
  }
  FUN_02178b70(iVar5,4);
  *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | 4;
  return;
}

