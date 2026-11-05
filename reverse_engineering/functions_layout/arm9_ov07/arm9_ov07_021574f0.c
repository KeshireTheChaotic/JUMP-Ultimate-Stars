
void FUN_021574f0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == -0x7ffef000) {
    uVar2 = (**(code **)*param_2)();
    if (((uVar2 & 3) != 0) && (iVar1 = *(int *)(param_1 + 4), (*(uint *)(iVar1 + 0x90) & 1) == 1)) {
      iVar3 = *(int *)(*(int *)(iVar1 + 0x10) + 0x44);
      if (*(uint *)(iVar1 + 0x124) == 0x7ff0) {
        piVar4 = *(int **)(iVar3 + 4);
        (**(code **)(*piVar4 + 0x198))(piVar4,*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x58));
      }
      else {
        piVar4 = *(int **)(iVar3 + 4);
        (**(code **)(*piVar4 + 0x198))(piVar4,*(uint *)(iVar1 + 0x124) & 0xffff7fff);
      }
    }
    uVar2 = (**(code **)*param_2)();
    if ((uVar2 & 4) != 0) {
      FUN_02157118(*(undefined4 *)(iVar6 + 4));
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
      if ((*(uint *)(*(int *)(param_1 + 4) + 0x124) & 0x8000) == 0) {
        FUN_0207342c(0x78,0);
        pcVar5 = *(code **)(*(int *)(iVar1 + 0x70) + 0x20);
        if (pcVar5 != (code *)0x0) {
          (*pcVar5)(*(undefined4 *)(*(int *)(iVar1 + 0x70) + 0x10),
                    *(undefined4 *)(*(int *)(param_1 + 4) + 0x124));
        }
        FUN_02157480(iVar1);
        return;
      }
      FUN_0207342c(0x78,2);
      FUN_02157130(*(undefined4 *)(iVar1 + 4));
    }
  }
  return;
}

