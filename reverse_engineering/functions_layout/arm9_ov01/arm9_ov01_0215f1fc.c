
void FUN_0215f1fc(int param_1,undefined4 param_2,undefined1 *param_3)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_r1;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int local_498 [256];
  byte local_98 [20];
  undefined2 local_84 [16];
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined1 auStack_58 [64];
  
  iVar7 = 0;
  do {
    iVar5 = iVar7 * 2;
    iVar7 = iVar7 + 1;
    *(undefined2 *)(local_98 + iVar5) = *(undefined2 *)(param_1 + iVar5);
  } while (iVar7 < 10);
  local_64 = *(undefined1 *)(param_1 + 0x34);
  local_63 = *(undefined1 *)(param_1 + 0x35);
  local_62 = *(undefined1 *)(param_1 + 0x36);
  local_61 = *(undefined1 *)(param_1 + 0x37);
  local_60 = *(undefined2 *)(param_1 + 0x38);
  local_5e = *(undefined2 *)(param_1 + 0x3a);
  local_5c = *(undefined4 *)(param_1 + 0x3c);
  iVar7 = 0;
  do {
    iVar5 = iVar7 + 1;
    local_84[iVar7] = *(undefined2 *)(param_1 + iVar7 * 2 + 0x14);
    iVar7 = iVar5;
  } while (iVar5 < 0x10);
  FUN_02051890(param_2,auStack_58,0x40);
  uVar3 = func_0x021bdd90();
  iVar7 = FUN_02030e88(0x56a9ef13);
  pbVar6 = local_98;
  for (uVar8 = 0; uVar8 < uVar3; uVar8 = uVar8 + 1) {
    bVar2 = FUN_02031070(*(undefined4 *)(iVar7 + 4));
    *pbVar6 = *pbVar6 ^ bVar2;
    pbVar6 = pbVar6 + 1;
  }
  FUN_02030ebc(iVar7);
  uVar3 = func_0x021bdd90();
  iVar7 = 0;
  pbVar6 = local_98;
  for (uVar8 = 0; uVar8 < uVar3; uVar8 = uVar8 + 1) {
    iVar7 = iVar7 + (uint)*pbVar6;
    pbVar6 = pbVar6 + 1;
  }
  iVar7 = FUN_02030e88(iVar7);
  uVar8 = 0;
  do {
    uVar4 = FUN_02031070(*(undefined4 *)(iVar7 + 4));
    FUN_0200d338(uVar4,uVar3);
    local_498[uVar8] = extraout_r1;
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x100);
  uVar3 = 0;
  do {
    piVar1 = local_498 + uVar3;
    iVar5 = local_498[uVar3 + 1];
    bVar2 = local_98[*piVar1];
    uVar3 = uVar3 + 2;
    local_98[*piVar1] = local_98[iVar5];
    local_98[iVar5] = bVar2;
  } while (uVar3 < 0x100);
  FUN_02030ebc(iVar7);
  uVar3 = func_0x021bdd90();
  pbVar6 = local_98;
  for (uVar8 = 0; uVar8 < uVar3; uVar8 = uVar8 + 1) {
    *param_3 = *(undefined1 *)
                (*(int *)(((int)(uint)*pbVar6 >> 4) * 4 + 0x21d4324) + (*pbVar6 & 0xf) * 2);
    param_3[1] = *(undefined1 *)
                  (*(int *)(((int)(uint)*pbVar6 >> 4) * 4 + 0x21d4324) + (*pbVar6 & 0xf) * 2 + 1);
    param_3 = param_3 + 2;
    pbVar6 = pbVar6 + 1;
  }
  *param_3 = 0;
  return;
}

