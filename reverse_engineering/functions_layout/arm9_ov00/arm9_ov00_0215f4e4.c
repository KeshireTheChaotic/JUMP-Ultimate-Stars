
bool FUN_0215f4e4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = 0;
  bVar6 = false;
  if (*(char *)(param_1 + 0x68) != '\0') {
    return true;
  }
  iVar3 = 0;
  do {
    if (7 < iVar3) {
LAB_0215f5bc:
      uVar5 = 0;
      do {
        iVar3 = *(int *)(param_2 + uVar5 * 4);
        if (uVar5 < uVar4) {
          piVar1 = *(int **)(iVar3 + 4);
          (**(code **)(*piVar1 + 0xd8))(piVar1,1);
          iVar3 = *(int *)(*(int *)(*(int *)(param_2 + uVar5 * 4) + 4) + 0x50);
          *(int *)(iVar3 + 0x10) = *(int *)(&DAT_021601ec + uVar5 * 4 + (uVar4 - 1) * 0x1c) << 0xc;
          FUN_02150fb8(iVar3,1);
        }
        else {
          piVar1 = *(int **)(iVar3 + 4);
          (**(code **)(*piVar1 + 0xd8))(piVar1,0);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < 7);
      return bVar6;
    }
    iVar2 = **(int **)(param_1 + 100);
    if (iVar2 - 2U < 2) {
      bVar6 = iVar2 == 3;
      if (!bVar6) {
        if ((*(int **)(param_1 + 100))[1] == 1) {
          *(undefined1 *)(param_1 + 0x69) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x69) = 1;
        }
      }
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 0x34;
      goto LAB_0215f5bc;
    }
    piVar1 = *(int **)(*(int *)(param_2 + iVar3 * 4) + 4);
    (**(code **)(*(int *)piVar1[0x19] + 0x70))();
    (**(code **)(*piVar1 + 0xc4))();
    piVar1 = *(int **)(*(int *)(*(int *)(param_2 + iVar3 * 4) + 4) + 100);
    (**(code **)(*piVar1 + 0x68))(piVar1,*(int *)(param_1 + 100) + 4);
    uVar4 = uVar4 + 1;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 0x34;
    iVar3 = iVar3 + 1;
  } while( true );
}

