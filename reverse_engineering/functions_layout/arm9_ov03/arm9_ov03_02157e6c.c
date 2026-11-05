
void FUN_02157e6c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 auStack_68 [64];
  undefined4 uStack_28;
  
  iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_28 = param_4;
  iVar2 = FUN_0214fb7c(*(undefined4 *)(iVar8 + 4));
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if ((2 < uVar3) && (*(char *)(iVar8 + 0xde) != '\0')) {
    cVar1 = *(char *)(iVar8 + 0xdc);
    iVar7 = 0;
    do {
      iVar4 = FUN_02154a7c(param_1,iVar7 + 2);
      thunk_FUN_0207400c(auStack_68,FUN_0215e714);
      uVar5 = FUN_0214d79c(*(undefined4 *)(iVar8 + 0xd0),*(undefined1 *)(iVar8 + 2),
                           *(undefined1 *)(iVar2 + cVar1 + iVar7 + 0x74));
      thunk_FUN_020741c4(auStack_68,uVar5);
      iVar6 = FUN_0203b424(2);
      FUN_0214cf8c(*(undefined4 *)(iVar6 + 0x88));
      piVar9 = *(int **)(iVar4 + 4);
      (**(code **)(*(int *)piVar9[0x19] + 0x70))();
      (**(code **)(*piVar9 + 0xc4))();
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
      piVar9 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar9 + 0x68))(piVar9,auStack_68);
      FUN_0214cfc8();
      iVar7 = iVar7 + 1;
    } while (iVar7 < 5);
  }
  return;
}

