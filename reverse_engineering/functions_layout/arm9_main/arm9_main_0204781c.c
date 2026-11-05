
void FUN_0204781c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_r1;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x34))(*(int **)(param_1 + 0x20),0);
  puVar1 = (undefined4 *)(**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x4c))();
  iVar6 = *(int *)(*(int *)(param_1 + 0x38) + 0x78);
  iVar6 = (int)(iVar6 + ((uint)(iVar6 >> 0xb) >> 0x14)) >> 0xc;
  uVar7 = *(uint *)(*(int *)(param_1 + 0x38) + 0x74) & 0xfffff000;
  iVar3 = -(puVar1[5] + iVar6 * -0x1000);
  local_34 = -(puVar1[4] - uVar7);
  local_30 = iVar3;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_0204760c(param_1,&local_34);
    iVar3 = extraout_r1;
  }
  bVar8 = *(char *)(param_1 + 0x90) != '\0';
  if (bVar8) {
    iVar3 = *(int *)(param_1 + 0x94);
  }
  if (bVar8 && iVar3 != 0) {
    FUN_0203d838(*(undefined4 *)(param_1 + 0x34),iVar3,param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x91) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x34);
  if (*(char *)(iVar3 + 0x954) != '\0') {
    *(undefined1 *)(iVar3 + 0x954) = 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x8e4) - 2U < 2) {
    local_2c = FUN_02050954(*puVar1);
    local_28 = 0;
    local_24 = 0;
    local_20 = FUN_02050954(puVar1[3]);
    local_3c = local_30;
    local_38 = local_34;
    FUN_0203d658(iVar3,&local_38,&local_3c);
    uVar4 = *(uint *)(*(int *)(param_1 + 0x38) + 0x78);
    *(uint *)(iVar3 + 0x920) = *(uint *)(*(int *)(param_1 + 0x38) + 0x74) >> 0xc;
    *(uint *)(iVar3 + 0x924) = uVar4 >> 0xc;
    *(undefined1 *)(iVar3 + 0x98c) = 1;
    *(undefined4 *)(iVar3 + 0x930) = local_2c;
    *(undefined4 *)(iVar3 + 0x934) = local_28;
    *(undefined4 *)(iVar3 + 0x938) = local_24;
    *(undefined4 *)(iVar3 + 0x93c) = local_20;
    *(undefined1 *)(iVar3 + 0x98c) = 1;
  }
  else {
    local_44 = local_30;
    local_40 = local_34;
    FUN_0203d658(iVar3,&local_40,&local_44);
  }
  iVar5 = puVar1[5];
  *(uint *)(iVar3 + 0x928) = -(puVar1[4] - uVar7);
  *(int *)(iVar3 + 0x92c) = -(iVar5 + iVar6 * -0x1000);
  if (*(char *)(param_1 + 0x91) != '\0') {
    if (*(int *)(param_1 + 0x94) == 0) {
      uVar2 = FUN_0203d6e8(*(undefined4 *)(param_1 + 0x34),param_1,*(undefined4 *)(param_1 + 0xa8));
      *(undefined4 *)(param_1 + 0x94) = uVar2;
    }
    FUN_0201dc68(auStack_4c,0,0,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
    FUN_0203d784(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x94),auStack_4c);
    FUN_0201dc68(auStack_54,0,0,*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70));
    FUN_0203d838(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x94),auStack_54);
    iVar6 = *(int *)(param_1 + 0x34);
    if (*(uint *)(param_1 + 0x6c) == (uint)*(ushort *)(iVar6 + 0x8c8)) {
      *(byte *)(*(int *)(param_1 + 0x94) + 0x3e) =
           *(byte *)(*(int *)(param_1 + 0x94) + 0x3e) & 0xfe | 1;
    }
    if (*(uint *)(param_1 + 0x70) == (uint)*(ushort *)(iVar6 + 0x8ca)) {
      *(byte *)(*(int *)(param_1 + 0x94) + 0x3e) = *(byte *)(*(int *)(param_1 + 0x94) + 0x3e) | 2;
    }
    *(undefined1 *)(param_1 + 0x91) = 0;
  }
  return;
}

