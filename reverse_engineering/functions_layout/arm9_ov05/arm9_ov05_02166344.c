
void FUN_02166344(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_40 [6];
  int local_28 [3];
  
  FUN_021634b4(local_28,&DAT_02171478);
  iVar1 = FUN_02164234(param_2);
  iVar3 = 0;
  if (iVar1 == 0) {
    iVar1 = FUN_02164458(param_2,local_40);
    if (iVar1 == 0) {
      piVar2 = *(int **)(*(int *)(param_1 + 0x20) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      do {
        if (local_40[iVar3] == 0) {
          iVar1 = 0;
          do {
            piVar2 = *(int **)(*(int *)(param_1 + iVar3 * 0x14 + iVar1 * 4 + 0x9c) + 4);
            (**(code **)(*piVar2 + 0xd8))(piVar2,0);
            iVar1 = iVar1 + 1;
          } while (iVar1 < 5);
          iVar1 = *(int *)(param_1 + iVar3 * 0x14 + 0xa4);
          FUN_02023894(*(undefined4 *)(iVar1 + 4),0xb20017,0);
          (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
          (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
          FUN_021639a8(iVar1,local_28);
        }
        else {
          FUN_021640c0(local_40[iVar3],param_1 + 0x20 + (iVar3 * 5 + 0x1f) * 4,0xb2000d,5,local_28,6
                      );
        }
        iVar3 = iVar3 + 1;
        local_28[0] = local_28[0] + 0x22000;
      } while (iVar3 < 6);
    }
    else {
      piVar2 = *(int **)(*(int *)(param_1 + 0x20) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
      do {
        iVar4 = local_40[iVar3];
        iVar1 = FUN_0207281c(iVar3);
        if (iVar4 == iVar1) {
          iVar1 = 0;
          do {
            piVar2 = *(int **)(*(int *)(param_1 + iVar3 * 0x14 + iVar1 * 4 + 0x9c) + 4);
            (**(code **)(*piVar2 + 0xd8))(piVar2,0);
            iVar1 = iVar1 + 1;
          } while (iVar1 < 5);
          iVar1 = *(int *)(param_1 + iVar3 * 0x14 + 0xa4);
          FUN_02023894(*(undefined4 *)(iVar1 + 4),0xb20022,0);
          (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
          (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
          FUN_021639a8(iVar1,local_28);
        }
        else {
          FUN_021640c0(iVar4,param_1 + 0x20 + (iVar3 * 5 + 0x1f) * 4,0xb20018,5,local_28,6);
        }
        iVar3 = iVar3 + 1;
        local_28[0] = local_28[0] + 0x22000;
      } while (iVar3 < 6);
    }
  }
  else {
    piVar2 = *(int **)(*(int *)(param_1 + 0x20) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    do {
      iVar1 = 0;
      do {
        piVar2 = *(int **)(*(int *)(param_1 + iVar3 * 0x14 + iVar1 * 4 + 0x9c) + 4);
        (**(code **)(*piVar2 + 0xd8))(piVar2,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 5);
      iVar1 = *(int *)(param_1 + iVar3 * 0x14 + 0xa4);
      FUN_02023894(*(undefined4 *)(iVar1 + 4),0xb20022,0);
      (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
      (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
      FUN_021639a8(iVar1,local_28);
      iVar3 = iVar3 + 1;
      local_28[0] = local_28[0] + 0x22000;
    } while (iVar3 < 6);
  }
  return;
}

