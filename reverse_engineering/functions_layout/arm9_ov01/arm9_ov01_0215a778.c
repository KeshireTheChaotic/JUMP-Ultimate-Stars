
void FUN_0215a778(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [92];
  
  uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 4) + 0x194))();
  iVar2 = FUN_0215716c(param_1);
  if ((iVar2 == 0) || (uVar3 = FUN_0215716c(param_1), uVar3 <= uVar1)) {
    FUN_02076c18(*(undefined4 *)(param_1 + 0x2cc));
    FUN_0207974c(*(undefined4 *)(param_1 + 0x2d4));
    FUN_0207907c(*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2cc));
    FUN_0215effc(*(undefined4 *)(param_1 + 0x2f4),0);
    piVar4 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
    (**(code **)(*piVar4 + 0xd8))(piVar4,0);
  }
  else {
    uVar5 = FUN_021571a8(param_1,uVar1);
    FUN_020769cc(*(undefined4 *)(param_1 + 0x2cc),uVar5);
    if (*(char *)(param_1 + 0x300) == '\0') {
      FUN_0207974c(*(undefined4 *)(param_1 + 0x2d4));
      FUN_0215f3f0(*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2cc));
      FUN_02079c30(*(undefined4 *)(param_1 + 0x2d4),0xa1);
      FUN_02076bbc(*(undefined4 *)(param_1 + 0x2cc),auStack_68);
      uVar1 = FUN_0207879c(*(undefined4 *)(param_1 + 0x2cc));
      if (((uVar1 & 0x1f) == 0) &&
         (iVar2 = FUN_02078814(*(undefined4 *)(param_1 + 0x2cc),auStack_68), iVar2 != 0)) {
        piVar4 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
        (**(code **)(*piVar4 + 0xd8))(piVar4,0);
      }
      else {
        piVar4 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
        (**(code **)(*piVar4 + 0xd8))(piVar4,1);
      }
    }
    else {
      FUN_0207974c(*(undefined4 *)(param_1 + 0x2d4));
      FUN_02079c30(*(undefined4 *)(param_1 + 0x2d4),0xe0);
      if (*(int *)(param_1 + 0x304) == 1) {
        FUN_0215effc(*(undefined4 *)(param_1 + 0x2f4),*(int *)(param_1 + 0x2b0) + uVar1 * 0x40);
      }
      else if (*(int *)(param_1 + 0x304) == 2) {
        if ((*(char *)(param_1 + 0x310) == '\n') && (uVar3 = FUN_0215716c(param_1), uVar1 == uVar3))
        {
          FUN_0215effc(*(undefined4 *)(param_1 + 0x2f4),0);
        }
        else {
          uVar5 = FUN_02072050(uVar1);
          FUN_0215effc(*(undefined4 *)(param_1 + 0x2f4),uVar5);
        }
      }
    }
  }
  return;
}

