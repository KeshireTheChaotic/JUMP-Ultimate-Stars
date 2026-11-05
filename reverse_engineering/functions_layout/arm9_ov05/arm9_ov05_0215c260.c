
void FUN_0215c260(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int local_30 [3];
  
  if (param_2 == 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1a0) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + iVar3 * 4 + 0x198) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    FUN_02079b18(*(undefined4 *)(param_1 + 4),1);
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x48) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    local_30[2] = 0;
    FUN_02150a10(*(undefined4 *)(param_1 + 0x48),local_30 + 2);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1a0) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    iVar3 = 0;
    do {
      FUN_02155654(*(undefined4 *)(param_1 + iVar3 * 4 + 0x198));
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + iVar3 * 4 + 0x198) + 4) + 100);
      (**(code **)(*piVar1 + 0xa8))(piVar1,6);
      local_30[0] = (iVar3 * 0x10 + 5) * 0x1000;
      local_30[1] = 0x8000;
      FUN_0214ce68(*(undefined4 *)(param_1 + iVar3 * 4 + 0x198),local_30 + 1,local_30);
      piVar1 = *(int **)(*(int *)(param_1 + iVar3 * 4 + 0x198) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
      uVar2 = FUN_0214e1e0(param_3,param_4,iVar3);
      piVar1 = *(int **)(*(int *)(*(int *)(param_1 + iVar3 * 4 + 0x198) + 4) + 100);
      (**(code **)(*piVar1 + 0x68))(piVar1,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    FUN_02079b18(*(undefined4 *)(param_1 + 4),0);
  }
  return;
}

