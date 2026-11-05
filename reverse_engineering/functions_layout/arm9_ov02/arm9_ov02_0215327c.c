
void FUN_0215327c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [12];
  byte local_38 [16];
  undefined4 uStack_28;
  
  iVar7 = (uint)*(byte *)(param_1 + 0x35d) * 0x3c + *(int *)(*(int *)(param_1 + 0x330) + 0x30);
  uStack_28 = param_4;
  iVar3 = FUN_02153808(param_1,*(undefined1 *)(param_1 + 0x35c));
  iVar6 = *(int *)(iVar3 * 0x28 + param_1 + 0xd8);
  iVar3 = FUN_02151454(*(undefined4 *)(param_1 + 0xc),0x564d5049,0);
  local_48 = 0x1000;
  FUN_02151858(*(undefined4 *)(param_1 + 0xc),&local_48);
  local_54 = 0;
  local_50 = 0x999;
  local_4c = 0x999;
  FUN_0214e39c(auStack_44,&local_4c,&local_50,&local_54);
  FUN_02013c48(*(undefined4 *)(iVar3 + 4),auStack_44,0);
  FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x18) + 4));
  func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 0x14) + 4));
  func_0x021b6214(*(undefined4 *)(iVar6 + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x14) + 4),1);
  iVar3 = FUN_02153588(*(undefined4 *)(param_1 + 0x18));
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
  FUN_02153b54(param_1,*(undefined1 *)(param_1 + 0x35c));
  func_0x021b6760(*(undefined4 *)(*(int *)(param_1 + 0x50) + 4),4,FUN_02153da0);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x28) + 4),0x11000,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 0x68) + 0x6c))();
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x48) + 4),0x11002,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x48) + 4) + 0x68) + 0x6c))();
  local_58 = DAT_0215cbf8;
  FUN_0214ef60(*(undefined4 *)(param_1 + 0x44),&local_58);
  for (uVar5 = 0; uVar4 = (uint)*(byte *)(iVar7 + 0x2c), uVar5 < uVar4; uVar5 = uVar5 + 1 & 0xff) {
    local_38[uVar5] = (byte)uVar5;
  }
  for (iVar3 = 0; iVar3 < (int)(uVar4 - 1); iVar3 = iVar3 + 1) {
    iVar6 = (uint)*(byte *)(iVar7 + (uint)local_38[iVar3] + 0x2d) * 0x48 +
            *(int *)(*(int *)(param_1 + 0x330) + 0x34);
    iVar9 = iVar3;
    while( true ) {
      iVar2 = iVar9;
      iVar9 = iVar2 + 1;
      uVar4 = (uint)*(byte *)(iVar7 + 0x2c);
      if ((int)uVar4 <= iVar9) break;
      iVar8 = (uint)*(byte *)(iVar7 + (uint)local_38[iVar2 + 1] + 0x2d) * 0x48 +
              *(int *)(*(int *)(param_1 + 0x330) + 0x34);
      if (*(short *)(iVar6 + 0x2e) < *(short *)(iVar8 + 0x2e)) {
        bVar1 = local_38[iVar3];
        local_38[iVar3] = local_38[iVar2 + 1];
        local_38[iVar2 + 1] = bVar1;
        iVar6 = iVar8;
      }
    }
  }
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(iVar7 + 0x2c); iVar3 = iVar3 + 1) {
    bVar1 = *(byte *)(iVar7 + (uint)local_38[iVar3] + 0x2d);
    iVar6 = *(int *)(*(int *)(param_1 + 0x330) + 0x34);
    local_5c = (iVar3 + 0x83) * 0x1000;
    FUN_0214d650(*(undefined4 *)((uint)local_38[iVar3] * 0x28 + param_1 + 0xd8),&local_5c);
    for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)((uint)bVar1 * 0x48 + iVar6 + 0x44);
        iVar9 = iVar9 + 1) {
      local_60 = (iVar9 + 0x95) * 0x1000;
      FUN_0214d650(*(undefined4 *)((uint)local_38[iVar3] * 0x28 + param_1 + iVar9 * 4 + 0xdc),
                   &local_60);
    }
  }
  local_64 = 0x83000;
  FUN_0214d650(*(undefined4 *)(param_1 + 0x14),&local_64);
  local_68 = 0x95000;
  FUN_0214d650(*(undefined4 *)(param_1 + 0x18),&local_68);
  return;
}

