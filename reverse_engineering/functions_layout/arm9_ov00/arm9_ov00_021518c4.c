
void FUN_021518c4(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1[0x425];
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (param_4 != 0) {
    param_1[0x425] = uVar4 | 2;
    if ((uint)param_1[0xe] < (uint)param_1[0xf]) {
      FUN_02151a2c(param_1 + 0xd);
      return;
    }
    return;
  }
  if ((uVar4 & 2) == 0) {
    return;
  }
  param_1[0x425] = uVar4 & 0xfffffffd;
  if ((uint)param_1[0xe] < (uint)param_1[0xf]) {
    FUN_02151a2c(param_1 + 0xd,0xffffffff,0xffffffff);
  }
  puVar1 = (uint *)(**(code **)(**(int **)(param_1[4] + 4) + 0x2c))(*(int **)(param_1[4] + 4),0);
  uVar5 = *puVar1;
  piVar2 = (int *)(**(code **)(**(int **)(param_1[4] + 4) + 0x2c))(*(int **)(param_1[4] + 4),4);
  iVar3 = FUN_02151ac0(param_1);
  uVar4 = 0;
  do {
    if (uVar5 <= uVar4) {
      iVar3 = -1;
LAB_021519c4:
      if (iVar3 == -1) {
        param_1[0x425] = param_1[0x425] | 1;
        FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_02151bc8);
        return;
      }
      if ((code *)param_1[2] != (code *)0x0) {
        (*(code *)param_1[2])(param_1);
      }
      param_1[0x425] = param_1[0x425] | 1;
      FUN_020282f4(*(undefined4 *)(*param_1 + 4));
      return;
    }
    if (piVar2[1] == *(int *)(param_1[7] + iVar3 * 4)) {
      iVar3 = *piVar2;
      goto LAB_021519c4;
    }
    piVar2 = piVar2 + 2;
    uVar4 = uVar4 + 1;
  } while( true );
}

