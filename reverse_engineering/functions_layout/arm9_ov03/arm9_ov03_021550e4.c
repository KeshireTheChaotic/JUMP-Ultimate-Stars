
void FUN_021550e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  uVar1 = FUN_0214fb7c();
  uVar4 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
  if ((int)uVar4 < 0x14) {
    FUN_0215523c(&local_20,uVar1);
    local_1c = local_20 + -0x21000;
  }
  else {
    FUN_0215523c(&local_1c,uVar1);
  }
  iVar6 = (int)(local_1c + ((uint)(local_1c >> 0xb) >> 0x14)) >> 0xc;
  FUN_0215523c(&local_24,param_1);
  local_24 = local_24 + iVar6 * 0x1000;
  iVar5 = (int)(local_24 + ((uint)(local_24 >> 0xb) >> 0x14)) >> 0xc;
  if (0x25f < iVar5) {
    for (; 0x25f < iVar5; iVar5 = iVar5 + -0x280) {
    }
  }
  if (iVar5 < -0x1f) {
    for (; iVar5 < -0x1f; iVar5 = iVar5 + 0x280) {
    }
  }
  local_28 = (iVar5 - iVar6) * 0x1000;
  FUN_021550c4(param_1,&local_28);
  piVar2 = *(int **)(param_1 + 4);
  iVar6 = piVar2[4];
  uVar3 = *(uint *)(iVar6 + 0x574);
  if ((int)uVar4 < 0x14) {
    bVar7 = (uVar3 & 1 << (uVar4 & 0xff)) == 0;
    if (bVar7) {
      uVar3 = (uint)*(byte *)(iVar6 + 0x58a);
    }
    if ((bVar7 && uVar3 == uVar4) && (iVar5 < 0)) {
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      if (*(char *)(iVar6 + 0x58a) != '\0') {
        *(char *)(iVar6 + 0x58a) = *(char *)(iVar6 + 0x58a) + -1;
      }
      *(uint *)(iVar6 + 0x574) = *(uint *)(iVar6 + 0x574) | 1 << (uVar4 & 0xff);
    }
  }
  else {
    uVar4 = uVar4 - 0x14;
    if (((uVar3 & 1 << (uVar4 & 0xff)) != 0) &&
       ((*(uint *)(iVar6 + 0x578) & 1 << (uVar4 & 0xff)) == 0)) {
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      *(uint *)(iVar6 + 0x578) = *(uint *)(iVar6 + 0x578) | 1 << (uVar4 & 0xff);
    }
  }
  return;
}

