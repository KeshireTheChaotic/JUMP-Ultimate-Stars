
void FUN_0201e4c8(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint local_20;
  int *piStack_1c;
  
  piStack_1c = param_4;
  puVar1 = (uint *)(**(code **)(*param_2 + 0xa0))();
  local_20 = *puVar1;
  puVar1 = (uint *)(**(code **)(*param_2 + 0xb4))();
  uVar5 = *puVar1;
  uVar2 = FUN_02011ac8(param_1);
  while (iVar4 = FUN_02016314(&local_20,*(undefined2 *)*param_4), iVar4 != 0) {
    uVar3 = local_20;
    if (local_20 != uVar5) {
      uVar3 = (uint)*(ushort *)*param_4;
    }
    if (local_20 != uVar5 && uVar5 != uVar3 * 0x1000) {
      FUN_0201e468(uVar2);
    }
    iVar4 = *param_4;
    *param_4 = iVar4 + -4;
    iVar4 = FUN_0201e5d8(&local_20,*(undefined2 *)(iVar4 + -4));
    if (iVar4 != 0) {
      FUN_0201e468(uVar2,*param_4);
    }
  }
  while (iVar4 = FUN_02016328(*(undefined2 *)(*param_4 + 4),&local_20), iVar4 != 0) {
    iVar4 = *param_4;
    *param_4 = iVar4 + 4;
    if ((int)uVar5 <= (int)((uint)*(ushort *)(iVar4 + 4) * 0x1000)) {
      FUN_0201e468(uVar2);
    }
  }
  param_2[0x12] = *param_4;
  return;
}

