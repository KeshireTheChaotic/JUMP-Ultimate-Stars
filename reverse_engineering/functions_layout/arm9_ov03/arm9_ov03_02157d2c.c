
void FUN_02157d2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined2 local_60;
  undefined2 local_5e [10];
  undefined2 uStack_4a;
  undefined4 uStack_20;
  
  iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_20 = param_4;
  iVar2 = FUN_0214fb7c(*(undefined4 *)(iVar8 + 4));
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if ((2 < uVar3) && (*(char *)(iVar8 + 0xde) != '\0')) {
    cVar1 = *(char *)(iVar8 + 0xdc);
    iVar7 = 0;
    do {
      iVar4 = FUN_02154a7c(param_1,iVar7 + 2);
      iVar5 = FUN_0214d784(*(undefined1 *)(iVar8 + 2),*(undefined1 *)(iVar2 + cVar1 + iVar7 + 0x74))
      ;
      local_60 = 0x3000;
      for (iVar6 = 0;
          (iVar6 < 10 &&
          (local_5e[iVar6] = *(undefined2 *)(iVar5 + iVar6 * 2), *(short *)(iVar5 + iVar6 * 2) != 0)
          ); iVar6 = iVar6 + 1) {
      }
      if (iVar6 == 10) {
        uStack_4a = 0;
      }
      iVar5 = FUN_0203b424(0);
      FUN_0214cf8c(*(undefined4 *)(iVar5 + 0x88));
      piVar9 = *(int **)(iVar4 + 4);
      (**(code **)(*(int *)piVar9[0x19] + 0x70))();
      (**(code **)(*piVar9 + 0xc4))();
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
      piVar9 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar9 + 0x6c))(piVar9,&local_60);
      FUN_0214cfc8();
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
  }
  return;
}

