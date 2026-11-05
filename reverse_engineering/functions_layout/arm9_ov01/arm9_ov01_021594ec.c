
void FUN_021594ec(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_2c;
  
  iVar4 = 0;
  do {
    if (iVar4 == *(int *)(param_1 + 0x304)) {
      iVar5 = param_1 + iVar4 * 4;
      FUN_02023894(*(undefined4 *)(*(int *)(iVar5 + 0x38) + 4),iVar4 * 2 + 0x880009,0);
      func_0x021b77dc(*(undefined4 *)(*(int *)(iVar5 + 0x80) + 4));
    }
    else {
      iVar6 = param_1 + iVar4 * 4;
      FUN_02023894(*(undefined4 *)(*(int *)(iVar6 + 0x38) + 4),iVar4 * 2 + 0x880008,0);
      iVar5 = *(int *)(param_1 + 0x304) - iVar4;
      if ((iVar5 == -1) || (iVar5 == 2)) {
        func_0x021b77dc(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4));
        func_0x021b77a8(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4),0x200);
      }
      else {
        func_0x021b77dc(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4));
        func_0x021b77a8(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4),0x100);
      }
      iVar5 = FUN_02158c08(*(undefined4 *)(iVar6 + 0x38));
      if (iVar5 == 0) {
        FUN_0200d12c(iVar4 + 1,3);
        if (iVar4 == 0) {
          iVar5 = 2;
        }
        else {
          iVar5 = iVar4 + -1;
        }
        if (extraout_r1 == *(int *)(param_1 + 0x304)) {
          iVar2 = FUN_02158c08(*(undefined4 *)(param_1 + iVar5 * 4 + 0x38));
          if (iVar2 == 0) {
            func_0x021b65e8(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4),4,0x215a4e1);
          }
          else {
            func_0x021b65e8(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4),4,
                            (&PTR_FUN_0215a3b4_1_02169d80)[iVar5]);
          }
        }
        else {
          iVar5 = FUN_02158c08(*(undefined4 *)(param_1 + extraout_r1 * 4 + 0x38));
          if (iVar5 == 0) {
            func_0x021b65e8(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4),4,0x215a4e1);
          }
          else {
            func_0x021b65e8(*(undefined4 *)(*(int *)(iVar6 + 0x80) + 4),4,
                            (&PTR_FUN_0215a3b4_1_02169d80)[extraout_r1]);
          }
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  iVar4 = *(int *)(param_1 + 0x304);
  if (iVar4 == 0) {
    iVar4 = FUN_02071f54();
    if ((iVar4 == 0) ||
       (((cVar1 = *(char *)(param_1 + 0x310), cVar1 != '\x05' && (cVar1 != '\x04')) &&
        (cVar1 != '\x01')))) {
      piVar3 = *(int **)(*(int *)(param_1 + 0x74) + 4);
      (**(code **)(*piVar3 + 0x148))(piVar3,8);
    }
    else {
      piVar3 = *(int **)(*(int *)(param_1 + 0x74) + 4);
      (**(code **)(*piVar3 + 0x14c))(piVar3,8);
    }
    piVar3 = *(int **)(*(int *)(param_1 + 0x7c) + 4);
    (**(code **)(*piVar3 + 0x148))(piVar3,8);
  }
  else if (iVar4 == 1) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x74) + 4);
    (**(code **)(*piVar3 + 0x148))(piVar3,8);
    piVar3 = *(int **)(*(int *)(param_1 + 0x7c) + 4);
    (**(code **)(*piVar3 + 0x14c))(piVar3,8);
  }
  else if (iVar4 == 2) {
    piVar3 = *(int **)(*(int *)(param_1 + 0x74) + 4);
    (**(code **)(*piVar3 + 0x148))(piVar3,8);
    piVar3 = *(int **)(*(int *)(param_1 + 0x7c) + 4);
    (**(code **)(*piVar3 + 0x14c))(piVar3,8);
  }
  iVar4 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x304) == 2) {
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4),0x880018,0);
    local_2c = 0x76;
  }
  else {
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x34) + 4),0x880017,0);
    local_2c = 0x16;
  }
  iVar5 = 0x15;
  do {
    piVar3 = *(int **)(*(int *)(iVar4 + 4) + 100);
    (**(code **)(*piVar3 + 0x84))(piVar3,iVar5,0,local_2c + iVar5 + 0xb);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1d);
  iVar5 = 2;
  do {
    iVar6 = 0x15;
    do {
      piVar3 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar3 + 0x84))(piVar3,iVar6,iVar5,local_2c + iVar6 + -0x15);
      piVar3 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar3 + 0x84))(piVar3,iVar6,iVar5 + 1,local_2c + 0x20 + iVar6 + -0x15);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x1d);
    iVar5 = iVar5 + 3;
  } while (iVar5 < 0x20);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x34) + 4) + 0x68) + 0x6c))();
  FUN_02159790(param_1,0);
  return;
}

