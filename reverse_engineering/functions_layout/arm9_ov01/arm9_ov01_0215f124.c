
void FUN_0215f124(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  do {
    iVar4 = 0;
    iVar5 = param_1 + iVar3 * 0x14;
    do {
      if (param_2 == 0) {
        iVar1 = *(int *)(iVar5 + iVar4 * 4 + 0x3c);
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 4);
          (**(code **)(*piVar2 + 0xd8))(piVar2,0);
        }
      }
      else {
        iVar1 = *(int *)(iVar5 + iVar4 * 4 + 0x3c);
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 4);
          (**(code **)(*piVar2 + 0xd8))(piVar2,1);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}

