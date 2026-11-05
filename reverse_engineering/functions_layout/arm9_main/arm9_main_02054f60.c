
void FUN_02054f60(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar1 = CONCAT44(param_3,param_2);
  if (*(int *)(param_1 + 0x20) != 0 || *(int *)(param_1 + 0x1c) != 0) {
    uVar10 = FUN_02054b44();
    uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar4 = (uint)uVar10;
    uVar7 = *(uint *)(param_1 + 0x28);
    uVar8 = *(uint *)(param_1 + 0x24);
    lVar1 = *(longlong *)(param_1 + 0x24);
    bVar9 = uVar5 <= uVar7;
    if (uVar7 == uVar5) {
      bVar9 = uVar4 <= uVar8;
    }
    if (!bVar9) {
      lVar2 = *(longlong *)(param_1 + 0x1c);
      lVar11 = FUN_0200d0c4(uVar4 - uVar8,uVar5 - (uVar7 + (uVar4 < uVar8)),
                            *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
      lVar1 = (lVar11 + 1) * lVar2 + lVar1;
    }
  }
  *(longlong *)(param_1 + 0xc) = lVar1;
  for (iVar6 = DAT_020aae9c; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x18)) {
    if ((int)((int)((ulonglong)lVar1 >> 0x20) -
             (*(int *)(iVar6 + 0x10) + (uint)((uint)lVar1 < *(uint *)(iVar6 + 0xc)))) < 0) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar6 + 0x14);
      *(int *)(iVar6 + 0x14) = param_1;
      *(int *)(param_1 + 0x18) = iVar6;
      if (*(int *)(param_1 + 0x14) == 0) {
        DAT_020aae9c = param_1;
        FUN_02055118(param_1);
        return;
      }
      *(int *)(*(int *)(param_1 + 0x14) + 0x18) = param_1;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  iVar6 = DAT_020aaea0;
  iVar3 = param_1;
  *(int *)(param_1 + 0x14) = DAT_020aaea0;
  DAT_020aaea0 = iVar3;
  if (iVar6 == 0) {
    DAT_020aae9c = param_1;
    DAT_020aaea0 = param_1;
    FUN_02055118(param_1);
    return;
  }
  *(int *)(iVar6 + 0x18) = param_1;
  return;
}

