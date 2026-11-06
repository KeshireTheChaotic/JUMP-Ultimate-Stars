
undefined4 FUN_0206ab24(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [12];
  
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
  lVar6 = FUN_0205646c(auStack_30,auStack_20);
  pcVar3 = (code *)lVar6;
  if (lVar6 < 0) {
    return 0;
  }
  iVar1 = FUN_02054c7c(pcVar3);
  if (iVar1 != 0) {
    pcVar3 = OS_GetTick + (int)pcVar3;
  }
  FUN_020554a8(&local_38);
  bVar5 = ((uint)local_36 | (uint)local_38 << 0x10 | (uint)local_37 << 8) != 0x9bf;
  uVar2 = (uint)local_33 | (uint)local_35 << 0x10 | (uint)local_34 << 8;
  uVar4 = (int)pcVar3 * 0x5d588b65 + 0x269ec3;
  *(short *)(param_1 + 4) = (short)((uVar4 >> 0x10) * 1000 >> 0x10);
  *param_1 = 0;
  param_1[1] = 0;
  if (*(short *)((int)param_1 + 0x12) == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    if (param_1[3] == 0 && param_1[2] == 0) {
      do {
        do {
          uVar4 = uVar4 * 0x5d588b65 + 0x269ec3;
        } while (uVar4 == 0);
        *(short *)((int)param_1 + 0x12) = (short)uVar4;
        uVar7 = FUN_0206ac6c(*(undefined2 *)((int)param_1 + 0x12),uVar2,bVar5,0);
        *(undefined8 *)(param_1 + 2) = uVar7;
      } while (param_1[3] == 0 && param_1[2] == 0);
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    if (param_1[3] == 0 && param_1[2] == 0) {
      do {
        *(short *)((int)param_1 + 0x12) = *(short *)((int)param_1 + 0x12) + 1;
        uVar7 = FUN_0206ac6c(*(undefined2 *)((int)param_1 + 0x12),uVar2,bVar5,0);
        *(undefined8 *)(param_1 + 2) = uVar7;
      } while (param_1[3] == 0 && param_1[2] == 0);
    }
  }
  return 1;
}

