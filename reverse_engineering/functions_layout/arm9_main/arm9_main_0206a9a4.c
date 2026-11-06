
undefined4 FUN_0206a9a4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [12];
  
  local_38 = 0;
  local_37 = 0;
  local_36 = 0;
  local_35 = 0;
  local_34 = 0;
  local_33 = 0;
  FUN_0206a4f8();
  FUN_02056298();
  iVar1 = FUN_020561dc(auStack_30);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = FUN_0205611c(auStack_20);
  if (iVar1 != 0) {
    return 0;
  }
  lVar10 = FUN_0205646c(auStack_30,auStack_20);
  pcVar8 = (code *)lVar10;
  if (lVar10 < 0) {
    return 0;
  }
  iVar1 = FUN_02054c7c(pcVar8);
  if (iVar1 != 0) {
    pcVar8 = OS_GetTick + (int)pcVar8;
  }
  FUN_020554a8(&local_38);
  uVar2 = (uint)local_36;
  uVar7 = (uint)local_38;
  uVar6 = (uint)local_37;
  uVar3 = (uint)local_33;
  uVar4 = (uint)local_35;
  uVar5 = (uint)local_34;
  uVar9 = (int)pcVar8 * 0x5d588b65 + 0x269ec3;
  *(short *)(param_1 + 0x10) = (short)((uVar9 >> 0x10) * 1000 >> 0x10);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0xc) == 0 && *(int *)(param_1 + 8) == 0) {
    do {
      do {
        do {
          uVar9 = uVar9 * 0x5d588b65 + 0x269ec3;
        } while (uVar9 == 0);
      } while ((uint)*(ushort *)(param_1 + 0x12) == (uVar9 & 0xffff));
      *(short *)(param_1 + 0x12) = (short)uVar9;
      uVar11 = FUN_0206ac6c(*(undefined2 *)(param_1 + 0x12),uVar3 | uVar4 << 0x10 | uVar5 << 8,
                            (uVar2 | uVar7 << 0x10 | uVar6 << 8) != 0x9bf,0);
      *(undefined8 *)(param_1 + 8) = uVar11;
    } while (*(int *)(param_1 + 0xc) == 0 && *(int *)(param_1 + 8) == 0);
  }
  return 1;
}

