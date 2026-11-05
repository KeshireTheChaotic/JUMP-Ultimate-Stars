
void FUN_0215bfd0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar3 = param_2 * 4;
  iVar7 = *(int *)(*(int *)(param_1 + 0x48) + iVar3);
  iVar12 = *(int *)(*(int *)(param_1 + 0x4c) + iVar3);
  iVar3 = *(int *)(*(int *)(param_1 + 0x50) + iVar3);
  uStack_18 = param_4;
  uVar4 = FUN_0214f898(iVar12,0x67625053);
  pcVar9 = *(char **)(param_1 + 0x74);
  iVar11 = *(int *)(pcVar9 + 8) + param_2 * 0x1c;
  if (*(char *)(*(int *)(pcVar9 + 8) + param_2 * 0x1c) != '\0') {
    bVar1 = false;
    bVar2 = false;
    if ((uint)*(byte *)(iVar11 + 0x19) + (uint)*(byte *)(iVar11 + 0x1a) < 4) {
      if (*(char *)(iVar11 + 1) == '\0') {
        bVar1 = true;
      }
      else if (pcVar9[1] != '\0') {
        bVar1 = true;
      }
    }
    if (((*pcVar9 != '\0') && (*(byte *)(iVar11 + 0x1b) < 4)) && (*(char *)(iVar11 + 1) == '\0')) {
      bVar2 = true;
    }
    if (bVar1) {
      iVar8 = 0;
    }
    else {
      iVar8 = 2;
    }
    if (bVar2) {
      uVar10 = param_2 | 0x2000;
    }
    else {
      uVar10 = param_2 | 0xa000;
      iVar8 = iVar8 + 1;
    }
    *(uint *)(*(int *)(iVar3 + 4) + 0x124) = uVar10;
    FUN_021524c8(uVar4,iVar8);
    FUN_0215c10c(param_1,param_2,iVar7,iVar11 + 4);
    if (bVar1) {
      iVar11 = 1;
    }
    else {
      iVar11 = 9;
    }
    *(uint *)(*(int *)(iVar12 + 4) + 0x124) = param_2 | iVar11 << 0xc;
    local_20 = DAT_0216a200;
    local_1c = DAT_0216a204;
    uVar4 = FUN_02020ed0(iVar12,0);
    FUN_02020eb4(iVar12,uVar4);
    uVar4 = FUN_0214f3bc(0,&local_20,&DAT_02093c8c);
    FUN_02020e98(iVar12,uVar4);
    uVar4 = FUN_0214f474(&local_20);
    uVar5 = FUN_0214f45c(&local_20);
    func_0x021b5900(*(undefined4 *)(iVar12 + 4),uVar5,uVar4);
    piVar6 = *(int **)(iVar3 + 4);
    (**(code **)(*piVar6 + 0xd8))(piVar6,1);
    piVar6 = *(int **)(iVar7 + 4);
    (**(code **)(*piVar6 + 0xd8))(piVar6,1);
  }
  return;
}

