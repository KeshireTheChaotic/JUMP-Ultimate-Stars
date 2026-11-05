
void FUN_02167a20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  *(undefined1 *)(param_2 + 0x2c) = 3;
  FUN_021679e0(param_1,param_2,*(undefined1 *)(param_2 + 0x30),param_4,param_4);
  FUN_02162ba4(param_1,(int)*(short *)(param_2 + 0x18));
  if (*(short *)(param_2 + 0x24) != -1) {
    iVar5 = *(short *)(param_2 + 0x24) * 0x18 + *(int *)(param_1 + 0x18);
    cVar4 = *(char *)(iVar5 + 0x14);
    if (cVar4 == '\x02') {
      iVar5 = *(short *)(iVar5 + 0x16) * 0x34 + *(int *)(param_1 + 0x1c);
      piVar1 = *(int **)(*(int *)(iVar5 + 8) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      uVar2 = (uint)*(byte *)(iVar5 + 0x2c);
      bVar7 = uVar2 != 3;
      if (bVar7) {
        uVar2 = *(uint *)(param_2 + 4);
      }
      if (bVar7 && uVar2 != 0) {
        (**(code **)(**(int **)(uVar2 + 4) + 0xd8))(*(int **)(uVar2 + 4),1);
      }
      if (*(char *)(iVar5 + 0x2d) != -1) {
        FUN_02166d04(*(undefined4 *)(param_1 + 0x2c),(int)*(char *)(iVar5 + 0x2d),0);
      }
      if (*(char *)(iVar5 + 0x2e) != -1) {
        FUN_02166d04(*(undefined4 *)(param_1 + 0x2c),(int)*(char *)(iVar5 + 0x2e),0);
      }
    }
    else if (cVar4 == '\x03') {
      piVar1 = *(int **)(*(int *)(param_2 + 4) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    }
  }
  if (*(short *)(param_2 + 0x26) != -1) {
    iVar5 = *(short *)(param_2 + 0x26) * 0x18 + *(int *)(param_1 + 0x18);
    uVar2 = (uint)*(byte *)(iVar5 + 0x14);
    if (uVar2 == 2) {
      iVar6 = *(short *)(iVar5 + 0x16) * 0x34 + *(int *)(param_1 + 0x1c);
      iVar3 = *(int *)(iVar6 + 4);
      if (iVar3 != 0) {
        piVar1 = *(int **)(iVar3 + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      }
      if (*(char *)(iVar6 + 0x2c) != '\x03') {
        piVar1 = *(int **)(*(int *)(param_2 + 8) + 4);
        (**(code **)(*piVar1 + 0xd8))(piVar1,1);
        if (*(char *)(param_2 + 0x2d) != -1) {
          FUN_02166d04(*(undefined4 *)(param_1 + 0x2c),(int)*(char *)(param_2 + 0x2d),1);
        }
        if (*(char *)(param_2 + 0x2e) != -1) {
          FUN_02166d04(*(undefined4 *)(param_1 + 0x2c),(int)*(char *)(param_2 + 0x2e),1);
        }
        *(byte *)(iVar5 + 0x15) = *(byte *)(iVar5 + 0x15) | 4;
        if (*(short *)(iVar5 + 0x10) != -1) {
          iVar3 = *(short *)(iVar5 + 0x10) * 0x18;
          iVar6 = *(int *)(param_1 + 0x18) + 0x15;
          *(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 2;
          *(undefined2 *)(*(short *)(iVar5 + 0x10) * 0x18 + *(int *)(param_1 + 0x18) + 0x12) =
               *(undefined2 *)(param_2 + 0x26);
        }
        if (*(short *)(iVar5 + 0x12) != -1) {
          iVar3 = *(short *)(iVar5 + 0x12) * 0x18;
          iVar6 = *(int *)(param_1 + 0x18) + 0x15;
          *(byte *)(iVar6 + iVar3) = *(byte *)(iVar6 + iVar3) | 1;
          *(undefined2 *)(*(short *)(iVar5 + 0x12) * 0x18 + *(int *)(param_1 + 0x18) + 0x10) =
               *(undefined2 *)(param_2 + 0x26);
        }
      }
    }
    else if (uVar2 == 1) {
      piVar1 = *(int **)(*(int *)(param_2 + 8) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      if (*(char *)(param_2 + 0x2d) != -1) {
        FUN_02166d04(*(undefined4 *)(param_1 + 0x2c),(int)*(char *)(param_2 + 0x2d),1);
      }
      if (*(char *)(param_2 + 0x2e) != -1) {
        FUN_02166d04(*(undefined4 *)(param_1 + 0x2c),(int)*(char *)(param_2 + 0x2e),1);
      }
      *(byte *)(iVar5 + 0x15) = *(byte *)(iVar5 + 0x15) | 4;
    }
    else if ((&DAT_02171548)[uVar2] != '\0') {
      *(byte *)(iVar5 + 0x15) = *(byte *)(iVar5 + 0x15) | 4;
    }
  }
  if ((*(short *)(param_2 + 0x28) != -1) &&
     (iVar5 = *(short *)(param_2 + 0x28) * 0x18 + *(int *)(param_1 + 0x18),
     *(char *)(iVar5 + 0x14) == '\x02')) {
    iVar3 = *(short *)(iVar5 + 0x16) * 0x34 + *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(iVar3 + 0x10);
    if (iVar5 != 0) {
      piVar1 = *(int **)(iVar5 + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    }
    uVar2 = (uint)*(byte *)(iVar3 + 0x2c);
    bVar7 = uVar2 != 3;
    if (bVar7) {
      uVar2 = *(uint *)(param_2 + 0xc);
    }
    if (bVar7 && uVar2 != 0) {
      (**(code **)(**(int **)(uVar2 + 4) + 0xd8))(*(int **)(uVar2 + 4),1);
    }
  }
  if ((*(short *)(param_2 + 0x2a) != -1) &&
     (iVar5 = *(short *)(param_2 + 0x2a) * 0x18 + *(int *)(param_1 + 0x18),
     *(char *)(iVar5 + 0x14) == '\x02')) {
    iVar3 = *(short *)(iVar5 + 0x16) * 0x34 + *(int *)(param_1 + 0x1c);
    iVar5 = *(int *)(iVar3 + 0xc);
    if (iVar5 != 0) {
      piVar1 = *(int **)(iVar5 + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    }
    uVar2 = (uint)*(byte *)(iVar3 + 0x2c);
    bVar7 = uVar2 != 3;
    if (bVar7) {
      uVar2 = *(uint *)(param_2 + 0x10);
    }
    if (bVar7 && uVar2 != 0) {
      (**(code **)(**(int **)(uVar2 + 4) + 0xd8))(*(int **)(uVar2 + 4),1);
    }
  }
  cVar4 = *(char *)(param_1 + 0x38) + '\x01';
  *(char *)(param_1 + 0x38) = cVar4;
  if (cVar4 == *(char *)(*(int *)(param_1 + 0x10) + 0x2c)) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 2;
  }
  return;
}

