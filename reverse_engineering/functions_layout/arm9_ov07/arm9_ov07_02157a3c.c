
void FUN_02157a3c(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_20;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x48) + param_2 * 4);
  iVar6 = *(int *)(param_1 + 0x70);
  iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + param_2 * 4);
  iVar8 = *(int *)(iVar6 + 8) + param_2 * 0x1c;
  if (*(char *)(iVar6 + 2) == '\0') {
    uVar7 = 4;
  }
  else {
    uVar7 = 2;
  }
  bVar1 = false;
  if ((uint)*(byte *)(iVar8 + 0x19) + (uint)*(byte *)(iVar8 + 0x1a) < uVar7) {
    if (*(char *)(iVar8 + 1) == '\0') {
      bVar1 = true;
    }
    else if (*(char *)(iVar6 + 1) != '\0') {
      bVar1 = true;
    }
  }
  if (bVar1) {
    local_20 = 0;
  }
  else {
    local_20 = 2;
  }
  uVar4 = FUN_0214f898(iVar3,0x67625053);
  FUN_021524c8(uVar4,local_20);
  FUN_02157ae4(param_1,param_2,iVar2,iVar8 + 4);
  piVar5 = *(int **)(iVar2 + 4);
  (**(code **)(*piVar5 + 0xd8))(piVar5,1);
  if (bVar1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x8000;
  }
  *(uint *)(*(int *)(iVar3 + 4) + 0x124) = param_2 | uVar7;
  *(undefined1 *)(iVar8 + 2) = 0;
  return;
}

